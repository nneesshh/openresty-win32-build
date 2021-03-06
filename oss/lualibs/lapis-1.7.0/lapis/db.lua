local config = require("lapis.config").get()
if config.postgres then
  return require("lapis.db.postgres")
elseif config.mysql then
  return require("lapis.db.mysql")
else
  error("You have to configure either postgres or mysql in \"lapis.config\"")
end
