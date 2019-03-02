-- Localize
local cwd = (...):gsub('%.[^%.]+$', '') .. "."
local ostime = os.time
local date = require("date")

local appconfig = require("lapis_appconfig")
local config = appconfig.getConfig()

local app_helpers = require("lapis.application")
local respond_to = app_helpers.respond_to
local capture_errors = app_helpers.capture_errors
local assert_error = app_helpers.assert_error

local validate = require("lapis.validate")

local auth = require(cwd .. "authorize")

return function(app)
  app:match("admin_news", "/AdminNews", respond_to({
    --
    before = function(self)
      auth(self, "any", self.route_name)
    end,
    
    GET = function(self)
      local News = require("models.News")
      local newsList = News.getAll()
      
      if #newsList > 0 then
        self.CurrentNews = newsList[1]
      end
      
      return { render = "admin.News", layout = false }
    end,
  }))

  app:match("admin_news_create", "/AdminNews/Create", respond_to({
    --
    before = function(self)
      auth(self, "any", self.route_name)
    end,
    
    GET = function(self)
      --
      return { render = "admin.NewsCreate", layout = false }
    end,

    POST = capture_errors(function(self)
      validate.assert_valid(self.params, {
        { "Content", exists = true, min_length = 2, max_length = 4096 },
      })
      
      local News = require("models.News")
      local d = date(false)
      
      local obj = News.create()
      if obj and self.session.user then
        obj.CreateBy = self.session.user.Id
        obj.CreateTime = d:fmt("%F %T")
        obj.Content = self.params.Content
        News.update(obj)
        
        return { redirect_to = self:url_for("admin_news") }
      else
        --assert_error(false, "创建失败!")
      end
    end,
    -- on_error
    function(self)
        return { redirect_to = self:url_for("admin_news") }
    end)
  }))
  
  app:match("admin_news_edit", "/AdminNews/Edit", respond_to({
    --
    before = function(self)
      auth(self, "any", self.route_name)
    end,
    
    --
    GET = capture_errors(function(self)
      validate.assert_valid(self.params, {
        { "Id", exists = true, min_length = 36, max_length = 36 },
      })
      
      local News = require("models.News")
      
      local obj = News.get(self.params.Id)
      if obj then
        self.CurrentNews = obj
      else
        assert_error(false, "编辑失败!")
      end
        
      return { render = "admin.NewsEdit", layout = false }
    end,
    -- on_error
    function(self)
      return { redirect_to = self:url_for("admin_news") }
    end),
  
    --
    POST = capture_errors(function(self)
      validate.assert_valid(self.params, {
        { "Id", exists = true, min_length = 36, max_length = 36 },
        { "Content", exists = true, min_length = 2, max_length = 4096 },
      })
      
      local News = require("models.News")
      local d = date(false)
      
      local obj = News.get(self.params.Id)
      if obj and self.session.user then
        obj.CreateBy = self.session.user.Id
        obj.CreateTime = d:fmt("%F %T")
        obj.Content = self.params.Content
        News.update(obj)
      else
        assert_error(false, "编辑失败Post!")
      end
      
      self.results = { status = "success" }
      self.CurrentNews = obj
      return { render = "admin.NewsEdit", layout = false }
    end,
    -- on_error
    function(self)
      return { redirect_to = self:url_for("admin_news") }
    end),
  }))

  app:match("admin_news_delete", "/AdminNews/Delete", respond_to({
    --
    before = function(self)
      auth(self, "any", self.route_name)
    end,
    
    --
    GET = capture_errors(function(self)
      validate.assert_valid(self.params, {
        { "Id", exists = true, min_length = 36, max_length = 36 },
      })
      
      self.Consent = {
        Id = self.params.Id,
        SourceUrl = self:url_for(self.route_name),
        Tips = "确认删除？",
      }
      
      return { render = "consent.Index", layout = false }
    end),
  
    --
    POST = capture_errors(function(self)
      validate.assert_valid(self.params, {
        { "Id", exists = true, min_length = 36, max_length = 36 },
        { "IsConsent", exists = true },
      })
      
      if "yes" == self.params.IsConsent then
        
        local News = require("models.News")
        local obj = News.get(self.params.Id)
        if obj then
          News.delete(obj)
          
          return { redirect_to = self:url_for("admin_news") }
        else
          assert_error(false, "删除失败Post!")
        end
      else
        return { redirect_to = self:url_for("admin_news") }
      end
    end,
    -- on_error
    function(self)
      return { redirect_to = self:url_for("admin_news") }
    end),
  }))

end