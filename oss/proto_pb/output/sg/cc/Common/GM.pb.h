// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GM.proto

#ifndef PROTOBUF_INCLUDED_GM_2eproto
#define PROTOBUF_INCLUDED_GM_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_GM_2eproto 

namespace protobuf_GM_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_GM_2eproto
namespace gm {
class GMAddItem;
class GMAddItemDefaultTypeInternal;
extern GMAddItemDefaultTypeInternal _GMAddItem_default_instance_;
class GMService;
class GMServiceDefaultTypeInternal;
extern GMServiceDefaultTypeInternal _GMService_default_instance_;
class GMService_GMRequest;
class GMService_GMRequestDefaultTypeInternal;
extern GMService_GMRequestDefaultTypeInternal _GMService_GMRequest_default_instance_;
class GMService_GMResponse;
class GMService_GMResponseDefaultTypeInternal;
extern GMService_GMResponseDefaultTypeInternal _GMService_GMResponse_default_instance_;
}  // namespace gm
namespace google {
namespace protobuf {
template<> ::gm::GMAddItem* Arena::CreateMaybeMessage<::gm::GMAddItem>(Arena*);
template<> ::gm::GMService* Arena::CreateMaybeMessage<::gm::GMService>(Arena*);
template<> ::gm::GMService_GMRequest* Arena::CreateMaybeMessage<::gm::GMService_GMRequest>(Arena*);
template<> ::gm::GMService_GMResponse* Arena::CreateMaybeMessage<::gm::GMService_GMResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gm {

enum GMService_GM_COMMAND {
  GMService_GM_COMMAND_ADD_ITEM = 1,
  GMService_GM_COMMAND_COMMAND_TXT = 101
};
bool GMService_GM_COMMAND_IsValid(int value);
const GMService_GM_COMMAND GMService_GM_COMMAND_GM_COMMAND_MIN = GMService_GM_COMMAND_ADD_ITEM;
const GMService_GM_COMMAND GMService_GM_COMMAND_GM_COMMAND_MAX = GMService_GM_COMMAND_COMMAND_TXT;
const int GMService_GM_COMMAND_GM_COMMAND_ARRAYSIZE = GMService_GM_COMMAND_GM_COMMAND_MAX + 1;

const ::google::protobuf::EnumDescriptor* GMService_GM_COMMAND_descriptor();
inline const ::std::string& GMService_GM_COMMAND_Name(GMService_GM_COMMAND value) {
  return ::google::protobuf::internal::NameOfEnum(
    GMService_GM_COMMAND_descriptor(), value);
}
inline bool GMService_GM_COMMAND_Parse(
    const ::std::string& name, GMService_GM_COMMAND* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GMService_GM_COMMAND>(
    GMService_GM_COMMAND_descriptor(), name, value);
}
// ===================================================================

class GMAddItem : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gm.GMAddItem) */ {
 public:
  GMAddItem();
  virtual ~GMAddItem();

  GMAddItem(const GMAddItem& from);

  inline GMAddItem& operator=(const GMAddItem& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GMAddItem(GMAddItem&& from) noexcept
    : GMAddItem() {
    *this = ::std::move(from);
  }

  inline GMAddItem& operator=(GMAddItem&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const GMAddItem& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GMAddItem* internal_default_instance() {
    return reinterpret_cast<const GMAddItem*>(
               &_GMAddItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(GMAddItem* other);
  void Swap(GMAddItem* other);
  friend void swap(GMAddItem& a, GMAddItem& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GMAddItem* New() const final {
    return CreateMaybeMessage<GMAddItem>(NULL);
  }

  GMAddItem* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GMAddItem>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GMAddItem& from);
  void MergeFrom(const GMAddItem& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GMAddItem* other);
  protected:
  explicit GMAddItem(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 item_typeid = 1;
  bool has_item_typeid() const;
  void clear_item_typeid();
  static const int kItemTypeidFieldNumber = 1;
  ::google::protobuf::uint64 item_typeid() const;
  void set_item_typeid(::google::protobuf::uint64 value);

  // required int32 item_num = 2;
  bool has_item_num() const;
  void clear_item_num();
  static const int kItemNumFieldNumber = 2;
  ::google::protobuf::int32 item_num() const;
  void set_item_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gm.GMAddItem)
 private:
  void set_has_item_typeid();
  void clear_has_item_typeid();
  void set_has_item_num();
  void clear_has_item_num();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint64 item_typeid_;
  ::google::protobuf::int32 item_num_;
  friend struct ::protobuf_GM_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GMService_GMRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gm.GMService.GMRequest) */ {
 public:
  GMService_GMRequest();
  virtual ~GMService_GMRequest();

  GMService_GMRequest(const GMService_GMRequest& from);

  inline GMService_GMRequest& operator=(const GMService_GMRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GMService_GMRequest(GMService_GMRequest&& from) noexcept
    : GMService_GMRequest() {
    *this = ::std::move(from);
  }

  inline GMService_GMRequest& operator=(GMService_GMRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const GMService_GMRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GMService_GMRequest* internal_default_instance() {
    return reinterpret_cast<const GMService_GMRequest*>(
               &_GMService_GMRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(GMService_GMRequest* other);
  void Swap(GMService_GMRequest* other);
  friend void swap(GMService_GMRequest& a, GMService_GMRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GMService_GMRequest* New() const final {
    return CreateMaybeMessage<GMService_GMRequest>(NULL);
  }

  GMService_GMRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GMService_GMRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GMService_GMRequest& from);
  void MergeFrom(const GMService_GMRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GMService_GMRequest* other);
  protected:
  explicit GMService_GMRequest(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gm.GMAddItem add_item_list = 11;
  int add_item_list_size() const;
  void clear_add_item_list();
  static const int kAddItemListFieldNumber = 11;
  ::gm::GMAddItem* mutable_add_item_list(int index);
  ::google::protobuf::RepeatedPtrField< ::gm::GMAddItem >*
      mutable_add_item_list();
  const ::gm::GMAddItem& add_item_list(int index) const;
  ::gm::GMAddItem* add_add_item_list();
  const ::google::protobuf::RepeatedPtrField< ::gm::GMAddItem >&
      add_item_list() const;

  // optional bytes command_txt = 51;
  bool has_command_txt() const;
  void clear_command_txt();
  static const int kCommandTxtFieldNumber = 51;
  const ::std::string& command_txt() const;
  void set_command_txt(const ::std::string& value);
  #if LANG_CXX11
  void set_command_txt(::std::string&& value);
  #endif
  void set_command_txt(const char* value);
  void set_command_txt(const void* value, size_t size);
  ::std::string* mutable_command_txt();
  ::std::string* release_command_txt();
  void set_allocated_command_txt(::std::string* command_txt);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_command_txt();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_command_txt(
      ::std::string* command_txt);

  // required .gm.GMService.GM_COMMAND cmd = 1;
  bool has_cmd() const;
  void clear_cmd();
  static const int kCmdFieldNumber = 1;
  ::gm::GMService_GM_COMMAND cmd() const;
  void set_cmd(::gm::GMService_GM_COMMAND value);

  // @@protoc_insertion_point(class_scope:gm.GMService.GMRequest)
 private:
  void set_has_cmd();
  void clear_has_cmd();
  void set_has_command_txt();
  void clear_has_command_txt();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::gm::GMAddItem > add_item_list_;
  ::google::protobuf::internal::ArenaStringPtr command_txt_;
  int cmd_;
  friend struct ::protobuf_GM_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GMService_GMResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gm.GMService.GMResponse) */ {
 public:
  GMService_GMResponse();
  virtual ~GMService_GMResponse();

  GMService_GMResponse(const GMService_GMResponse& from);

  inline GMService_GMResponse& operator=(const GMService_GMResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GMService_GMResponse(GMService_GMResponse&& from) noexcept
    : GMService_GMResponse() {
    *this = ::std::move(from);
  }

  inline GMService_GMResponse& operator=(GMService_GMResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const GMService_GMResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GMService_GMResponse* internal_default_instance() {
    return reinterpret_cast<const GMService_GMResponse*>(
               &_GMService_GMResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(GMService_GMResponse* other);
  void Swap(GMService_GMResponse* other);
  friend void swap(GMService_GMResponse& a, GMService_GMResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GMService_GMResponse* New() const final {
    return CreateMaybeMessage<GMService_GMResponse>(NULL);
  }

  GMService_GMResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GMService_GMResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GMService_GMResponse& from);
  void MergeFrom(const GMService_GMResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GMService_GMResponse* other);
  protected:
  explicit GMService_GMResponse(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 result = 1;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gm.GMService.GMResponse)
 private:
  void set_has_result();
  void clear_has_result();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 result_;
  friend struct ::protobuf_GM_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GMService : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gm.GMService) */ {
 public:
  GMService();
  virtual ~GMService();

  GMService(const GMService& from);

  inline GMService& operator=(const GMService& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GMService(GMService&& from) noexcept
    : GMService() {
    *this = ::std::move(from);
  }

  inline GMService& operator=(GMService&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const GMService& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GMService* internal_default_instance() {
    return reinterpret_cast<const GMService*>(
               &_GMService_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(GMService* other);
  void Swap(GMService* other);
  friend void swap(GMService& a, GMService& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GMService* New() const final {
    return CreateMaybeMessage<GMService>(NULL);
  }

  GMService* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GMService>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GMService& from);
  void MergeFrom(const GMService& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GMService* other);
  protected:
  explicit GMService(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef GMService_GMRequest GMRequest;
  typedef GMService_GMResponse GMResponse;

  typedef GMService_GM_COMMAND GM_COMMAND;
  static const GM_COMMAND ADD_ITEM =
    GMService_GM_COMMAND_ADD_ITEM;
  static const GM_COMMAND COMMAND_TXT =
    GMService_GM_COMMAND_COMMAND_TXT;
  static inline bool GM_COMMAND_IsValid(int value) {
    return GMService_GM_COMMAND_IsValid(value);
  }
  static const GM_COMMAND GM_COMMAND_MIN =
    GMService_GM_COMMAND_GM_COMMAND_MIN;
  static const GM_COMMAND GM_COMMAND_MAX =
    GMService_GM_COMMAND_GM_COMMAND_MAX;
  static const int GM_COMMAND_ARRAYSIZE =
    GMService_GM_COMMAND_GM_COMMAND_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GM_COMMAND_descriptor() {
    return GMService_GM_COMMAND_descriptor();
  }
  static inline const ::std::string& GM_COMMAND_Name(GM_COMMAND value) {
    return GMService_GM_COMMAND_Name(value);
  }
  static inline bool GM_COMMAND_Parse(const ::std::string& name,
      GM_COMMAND* value) {
    return GMService_GM_COMMAND_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .gm.GMService.GMRequest req = 1;
  bool has_req() const;
  void clear_req();
  static const int kReqFieldNumber = 1;
  private:
  const ::gm::GMService_GMRequest& _internal_req() const;
  public:
  const ::gm::GMService_GMRequest& req() const;
  ::gm::GMService_GMRequest* release_req();
  ::gm::GMService_GMRequest* mutable_req();
  void set_allocated_req(::gm::GMService_GMRequest* req);
  void unsafe_arena_set_allocated_req(
      ::gm::GMService_GMRequest* req);
  ::gm::GMService_GMRequest* unsafe_arena_release_req();

  // optional .gm.GMService.GMResponse resp = 2;
  bool has_resp() const;
  void clear_resp();
  static const int kRespFieldNumber = 2;
  private:
  const ::gm::GMService_GMResponse& _internal_resp() const;
  public:
  const ::gm::GMService_GMResponse& resp() const;
  ::gm::GMService_GMResponse* release_resp();
  ::gm::GMService_GMResponse* mutable_resp();
  void set_allocated_resp(::gm::GMService_GMResponse* resp);
  void unsafe_arena_set_allocated_resp(
      ::gm::GMService_GMResponse* resp);
  ::gm::GMService_GMResponse* unsafe_arena_release_resp();

  // @@protoc_insertion_point(class_scope:gm.GMService)
 private:
  void set_has_req();
  void clear_has_req();
  void set_has_resp();
  void clear_has_resp();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::gm::GMService_GMRequest* req_;
  ::gm::GMService_GMResponse* resp_;
  friend struct ::protobuf_GM_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GMAddItem

// required uint64 item_typeid = 1;
inline bool GMAddItem::has_item_typeid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMAddItem::set_has_item_typeid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMAddItem::clear_has_item_typeid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMAddItem::clear_item_typeid() {
  item_typeid_ = GOOGLE_ULONGLONG(0);
  clear_has_item_typeid();
}
inline ::google::protobuf::uint64 GMAddItem::item_typeid() const {
  // @@protoc_insertion_point(field_get:gm.GMAddItem.item_typeid)
  return item_typeid_;
}
inline void GMAddItem::set_item_typeid(::google::protobuf::uint64 value) {
  set_has_item_typeid();
  item_typeid_ = value;
  // @@protoc_insertion_point(field_set:gm.GMAddItem.item_typeid)
}

// required int32 item_num = 2;
inline bool GMAddItem::has_item_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMAddItem::set_has_item_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMAddItem::clear_has_item_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMAddItem::clear_item_num() {
  item_num_ = 0;
  clear_has_item_num();
}
inline ::google::protobuf::int32 GMAddItem::item_num() const {
  // @@protoc_insertion_point(field_get:gm.GMAddItem.item_num)
  return item_num_;
}
inline void GMAddItem::set_item_num(::google::protobuf::int32 value) {
  set_has_item_num();
  item_num_ = value;
  // @@protoc_insertion_point(field_set:gm.GMAddItem.item_num)
}

// -------------------------------------------------------------------

// GMService_GMRequest

// required .gm.GMService.GM_COMMAND cmd = 1;
inline bool GMService_GMRequest::has_cmd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMService_GMRequest::set_has_cmd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMService_GMRequest::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMService_GMRequest::clear_cmd() {
  cmd_ = 1;
  clear_has_cmd();
}
inline ::gm::GMService_GM_COMMAND GMService_GMRequest::cmd() const {
  // @@protoc_insertion_point(field_get:gm.GMService.GMRequest.cmd)
  return static_cast< ::gm::GMService_GM_COMMAND >(cmd_);
}
inline void GMService_GMRequest::set_cmd(::gm::GMService_GM_COMMAND value) {
  assert(::gm::GMService_GM_COMMAND_IsValid(value));
  set_has_cmd();
  cmd_ = value;
  // @@protoc_insertion_point(field_set:gm.GMService.GMRequest.cmd)
}

// repeated .gm.GMAddItem add_item_list = 11;
inline int GMService_GMRequest::add_item_list_size() const {
  return add_item_list_.size();
}
inline void GMService_GMRequest::clear_add_item_list() {
  add_item_list_.Clear();
}
inline ::gm::GMAddItem* GMService_GMRequest::mutable_add_item_list(int index) {
  // @@protoc_insertion_point(field_mutable:gm.GMService.GMRequest.add_item_list)
  return add_item_list_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gm::GMAddItem >*
GMService_GMRequest::mutable_add_item_list() {
  // @@protoc_insertion_point(field_mutable_list:gm.GMService.GMRequest.add_item_list)
  return &add_item_list_;
}
inline const ::gm::GMAddItem& GMService_GMRequest::add_item_list(int index) const {
  // @@protoc_insertion_point(field_get:gm.GMService.GMRequest.add_item_list)
  return add_item_list_.Get(index);
}
inline ::gm::GMAddItem* GMService_GMRequest::add_add_item_list() {
  // @@protoc_insertion_point(field_add:gm.GMService.GMRequest.add_item_list)
  return add_item_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gm::GMAddItem >&
GMService_GMRequest::add_item_list() const {
  // @@protoc_insertion_point(field_list:gm.GMService.GMRequest.add_item_list)
  return add_item_list_;
}

// optional bytes command_txt = 51;
inline bool GMService_GMRequest::has_command_txt() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMService_GMRequest::set_has_command_txt() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMService_GMRequest::clear_has_command_txt() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMService_GMRequest::clear_command_txt() {
  command_txt_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  clear_has_command_txt();
}
inline const ::std::string& GMService_GMRequest::command_txt() const {
  // @@protoc_insertion_point(field_get:gm.GMService.GMRequest.command_txt)
  return command_txt_.Get();
}
inline void GMService_GMRequest::set_command_txt(const ::std::string& value) {
  set_has_command_txt();
  command_txt_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:gm.GMService.GMRequest.command_txt)
}
#if LANG_CXX11
inline void GMService_GMRequest::set_command_txt(::std::string&& value) {
  set_has_command_txt();
  command_txt_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:gm.GMService.GMRequest.command_txt)
}
#endif
inline void GMService_GMRequest::set_command_txt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_command_txt();
  command_txt_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:gm.GMService.GMRequest.command_txt)
}
inline void GMService_GMRequest::set_command_txt(const void* value,
    size_t size) {
  set_has_command_txt();
  command_txt_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:gm.GMService.GMRequest.command_txt)
}
inline ::std::string* GMService_GMRequest::mutable_command_txt() {
  set_has_command_txt();
  // @@protoc_insertion_point(field_mutable:gm.GMService.GMRequest.command_txt)
  return command_txt_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* GMService_GMRequest::release_command_txt() {
  // @@protoc_insertion_point(field_release:gm.GMService.GMRequest.command_txt)
  if (!has_command_txt()) {
    return NULL;
  }
  clear_has_command_txt();
  return command_txt_.ReleaseNonDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void GMService_GMRequest::set_allocated_command_txt(::std::string* command_txt) {
  if (command_txt != NULL) {
    set_has_command_txt();
  } else {
    clear_has_command_txt();
  }
  command_txt_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), command_txt,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:gm.GMService.GMRequest.command_txt)
}
inline ::std::string* GMService_GMRequest::unsafe_arena_release_command_txt() {
  // @@protoc_insertion_point(field_unsafe_arena_release:gm.GMService.GMRequest.command_txt)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  clear_has_command_txt();
  return command_txt_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void GMService_GMRequest::unsafe_arena_set_allocated_command_txt(
    ::std::string* command_txt) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (command_txt != NULL) {
    set_has_command_txt();
  } else {
    clear_has_command_txt();
  }
  command_txt_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      command_txt, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:gm.GMService.GMRequest.command_txt)
}

// -------------------------------------------------------------------

// GMService_GMResponse

// required int32 result = 1;
inline bool GMService_GMResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMService_GMResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMService_GMResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMService_GMResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 GMService_GMResponse::result() const {
  // @@protoc_insertion_point(field_get:gm.GMService.GMResponse.result)
  return result_;
}
inline void GMService_GMResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:gm.GMService.GMResponse.result)
}

// -------------------------------------------------------------------

// GMService

// optional .gm.GMService.GMRequest req = 1;
inline bool GMService::has_req() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMService::set_has_req() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMService::clear_has_req() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMService::clear_req() {
  if (req_ != NULL) req_->Clear();
  clear_has_req();
}
inline const ::gm::GMService_GMRequest& GMService::_internal_req() const {
  return *req_;
}
inline const ::gm::GMService_GMRequest& GMService::req() const {
  const ::gm::GMService_GMRequest* p = req_;
  // @@protoc_insertion_point(field_get:gm.GMService.req)
  return p != NULL ? *p : *reinterpret_cast<const ::gm::GMService_GMRequest*>(
      &::gm::_GMService_GMRequest_default_instance_);
}
inline ::gm::GMService_GMRequest* GMService::release_req() {
  // @@protoc_insertion_point(field_release:gm.GMService.req)
  clear_has_req();
  ::gm::GMService_GMRequest* temp = req_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  req_ = NULL;
  return temp;
}
inline ::gm::GMService_GMRequest* GMService::unsafe_arena_release_req() {
  // @@protoc_insertion_point(field_unsafe_arena_release:gm.GMService.req)
  clear_has_req();
  ::gm::GMService_GMRequest* temp = req_;
  req_ = NULL;
  return temp;
}
inline ::gm::GMService_GMRequest* GMService::mutable_req() {
  set_has_req();
  if (req_ == NULL) {
    auto* p = CreateMaybeMessage<::gm::GMService_GMRequest>(GetArenaNoVirtual());
    req_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gm.GMService.req)
  return req_;
}
inline void GMService::set_allocated_req(::gm::GMService_GMRequest* req) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete req_;
  }
  if (req) {
    ::google::protobuf::Arena* submessage_arena =
      ::google::protobuf::Arena::GetArena(req);
    if (message_arena != submessage_arena) {
      req = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, req, submessage_arena);
    }
    set_has_req();
  } else {
    clear_has_req();
  }
  req_ = req;
  // @@protoc_insertion_point(field_set_allocated:gm.GMService.req)
}

// optional .gm.GMService.GMResponse resp = 2;
inline bool GMService::has_resp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMService::set_has_resp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMService::clear_has_resp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMService::clear_resp() {
  if (resp_ != NULL) resp_->Clear();
  clear_has_resp();
}
inline const ::gm::GMService_GMResponse& GMService::_internal_resp() const {
  return *resp_;
}
inline const ::gm::GMService_GMResponse& GMService::resp() const {
  const ::gm::GMService_GMResponse* p = resp_;
  // @@protoc_insertion_point(field_get:gm.GMService.resp)
  return p != NULL ? *p : *reinterpret_cast<const ::gm::GMService_GMResponse*>(
      &::gm::_GMService_GMResponse_default_instance_);
}
inline ::gm::GMService_GMResponse* GMService::release_resp() {
  // @@protoc_insertion_point(field_release:gm.GMService.resp)
  clear_has_resp();
  ::gm::GMService_GMResponse* temp = resp_;
  if (GetArenaNoVirtual() != NULL) {
    temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
  }
  resp_ = NULL;
  return temp;
}
inline ::gm::GMService_GMResponse* GMService::unsafe_arena_release_resp() {
  // @@protoc_insertion_point(field_unsafe_arena_release:gm.GMService.resp)
  clear_has_resp();
  ::gm::GMService_GMResponse* temp = resp_;
  resp_ = NULL;
  return temp;
}
inline ::gm::GMService_GMResponse* GMService::mutable_resp() {
  set_has_resp();
  if (resp_ == NULL) {
    auto* p = CreateMaybeMessage<::gm::GMService_GMResponse>(GetArenaNoVirtual());
    resp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gm.GMService.resp)
  return resp_;
}
inline void GMService::set_allocated_resp(::gm::GMService_GMResponse* resp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete resp_;
  }
  if (resp) {
    ::google::protobuf::Arena* submessage_arena =
      ::google::protobuf::Arena::GetArena(resp);
    if (message_arena != submessage_arena) {
      resp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, resp, submessage_arena);
    }
    set_has_resp();
  } else {
    clear_has_resp();
  }
  resp_ = resp;
  // @@protoc_insertion_point(field_set_allocated:gm.GMService.resp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gm

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gm::GMService_GM_COMMAND> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gm::GMService_GM_COMMAND>() {
  return ::gm::GMService_GM_COMMAND_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_GM_2eproto