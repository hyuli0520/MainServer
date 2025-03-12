// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Protocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Protocol_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protocol_2eproto;
namespace Protocol {
class REQ_ENTER;
struct REQ_ENTERDefaultTypeInternal;
extern REQ_ENTERDefaultTypeInternal _REQ_ENTER_default_instance_;
class RES_ENTER;
struct RES_ENTERDefaultTypeInternal;
extern RES_ENTERDefaultTypeInternal _RES_ENTER_default_instance_;
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::Protocol::REQ_ENTER* Arena::CreateMaybeMessage<::Protocol::REQ_ENTER>(Arena*);
template<> ::Protocol::RES_ENTER* Arena::CreateMaybeMessage<::Protocol::RES_ENTER>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Protocol {

// ===================================================================

class REQ_ENTER final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.REQ_ENTER) */ {
 public:
  inline REQ_ENTER() : REQ_ENTER(nullptr) {}
  ~REQ_ENTER() override;
  explicit PROTOBUF_CONSTEXPR REQ_ENTER(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  REQ_ENTER(const REQ_ENTER& from);
  REQ_ENTER(REQ_ENTER&& from) noexcept
    : REQ_ENTER() {
    *this = ::std::move(from);
  }

  inline REQ_ENTER& operator=(const REQ_ENTER& from) {
    CopyFrom(from);
    return *this;
  }
  inline REQ_ENTER& operator=(REQ_ENTER&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const REQ_ENTER& default_instance() {
    return *internal_default_instance();
  }
  static inline const REQ_ENTER* internal_default_instance() {
    return reinterpret_cast<const REQ_ENTER*>(
               &_REQ_ENTER_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(REQ_ENTER& a, REQ_ENTER& b) {
    a.Swap(&b);
  }
  inline void Swap(REQ_ENTER* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(REQ_ENTER* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  REQ_ENTER* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<REQ_ENTER>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const REQ_ENTER& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const REQ_ENTER& from) {
    REQ_ENTER::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(REQ_ENTER* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.REQ_ENTER";
  }
  protected:
  explicit REQ_ENTER(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPlayerIdFieldNumber = 1,
  };
  // uint64 playerId = 1;
  void clear_playerid();
  uint64_t playerid() const;
  void set_playerid(uint64_t value);
  private:
  uint64_t _internal_playerid() const;
  void _internal_set_playerid(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.REQ_ENTER)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t playerid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Protocol_2eproto;
};
// -------------------------------------------------------------------

class RES_ENTER final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.RES_ENTER) */ {
 public:
  inline RES_ENTER() : RES_ENTER(nullptr) {}
  ~RES_ENTER() override;
  explicit PROTOBUF_CONSTEXPR RES_ENTER(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RES_ENTER(const RES_ENTER& from);
  RES_ENTER(RES_ENTER&& from) noexcept
    : RES_ENTER() {
    *this = ::std::move(from);
  }

  inline RES_ENTER& operator=(const RES_ENTER& from) {
    CopyFrom(from);
    return *this;
  }
  inline RES_ENTER& operator=(RES_ENTER&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RES_ENTER& default_instance() {
    return *internal_default_instance();
  }
  static inline const RES_ENTER* internal_default_instance() {
    return reinterpret_cast<const RES_ENTER*>(
               &_RES_ENTER_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RES_ENTER& a, RES_ENTER& b) {
    a.Swap(&b);
  }
  inline void Swap(RES_ENTER* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RES_ENTER* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RES_ENTER* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RES_ENTER>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RES_ENTER& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RES_ENTER& from) {
    RES_ENTER::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RES_ENTER* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.RES_ENTER";
  }
  protected:
  explicit RES_ENTER(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPlayerIdFieldNumber = 1,
    kSuccessFieldNumber = 2,
  };
  // uint64 playerId = 1;
  void clear_playerid();
  uint64_t playerid() const;
  void set_playerid(uint64_t value);
  private:
  uint64_t _internal_playerid() const;
  void _internal_set_playerid(uint64_t value);
  public:

  // bool success = 2;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.RES_ENTER)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t playerid_;
    bool success_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Protocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// REQ_ENTER

// uint64 playerId = 1;
inline void REQ_ENTER::clear_playerid() {
  _impl_.playerid_ = uint64_t{0u};
}
inline uint64_t REQ_ENTER::_internal_playerid() const {
  return _impl_.playerid_;
}
inline uint64_t REQ_ENTER::playerid() const {
  // @@protoc_insertion_point(field_get:Protocol.REQ_ENTER.playerId)
  return _internal_playerid();
}
inline void REQ_ENTER::_internal_set_playerid(uint64_t value) {
  
  _impl_.playerid_ = value;
}
inline void REQ_ENTER::set_playerid(uint64_t value) {
  _internal_set_playerid(value);
  // @@protoc_insertion_point(field_set:Protocol.REQ_ENTER.playerId)
}

// -------------------------------------------------------------------

// RES_ENTER

// uint64 playerId = 1;
inline void RES_ENTER::clear_playerid() {
  _impl_.playerid_ = uint64_t{0u};
}
inline uint64_t RES_ENTER::_internal_playerid() const {
  return _impl_.playerid_;
}
inline uint64_t RES_ENTER::playerid() const {
  // @@protoc_insertion_point(field_get:Protocol.RES_ENTER.playerId)
  return _internal_playerid();
}
inline void RES_ENTER::_internal_set_playerid(uint64_t value) {
  
  _impl_.playerid_ = value;
}
inline void RES_ENTER::set_playerid(uint64_t value) {
  _internal_set_playerid(value);
  // @@protoc_insertion_point(field_set:Protocol.RES_ENTER.playerId)
}

// bool success = 2;
inline void RES_ENTER::clear_success() {
  _impl_.success_ = false;
}
inline bool RES_ENTER::_internal_success() const {
  return _impl_.success_;
}
inline bool RES_ENTER::success() const {
  // @@protoc_insertion_point(field_get:Protocol.RES_ENTER.success)
  return _internal_success();
}
inline void RES_ENTER::_internal_set_success(bool value) {
  
  _impl_.success_ = value;
}
inline void RES_ENTER::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:Protocol.RES_ENTER.success)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto
