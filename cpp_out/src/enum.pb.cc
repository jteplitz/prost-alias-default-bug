// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/enum.proto

#include "src/enum.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace test {
PROTOBUF_CONSTEXPR MyMessage::MyMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.f_)*/1} {}
struct MyMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MyMessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MyMessageDefaultTypeInternal() {}
  union {
    MyMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MyMessageDefaultTypeInternal _MyMessage_default_instance_;
}  // namespace test
static ::_pb::Metadata file_level_metadata_src_2fenum_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_src_2fenum_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_src_2fenum_2eproto = nullptr;

const uint32_t TableStruct_src_2fenum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::test::MyMessage, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::test::MyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::test::MyMessage, _impl_.f_),
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, -1, sizeof(::test::MyMessage)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::test::_MyMessage_default_instance_._instance,
};

const char descriptor_table_protodef_src_2fenum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016src/enum.proto\022\004test\"*\n\tMyMessage\022\035\n\001f"
  "\030\001 \001(\0162\t.test.Foo:\007DEFAULT*(\n\003Foo\022\007\n\003BAR"
  "\020\001\022\007\n\003ZAA\020\002\022\013\n\007DEFAULT\020\001\032\002\020\001"
  ;
static ::_pbi::once_flag descriptor_table_src_2fenum_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_src_2fenum_2eproto = {
    false, false, 108, descriptor_table_protodef_src_2fenum_2eproto,
    "src/enum.proto",
    &descriptor_table_src_2fenum_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_src_2fenum_2eproto::offsets,
    file_level_metadata_src_2fenum_2eproto, file_level_enum_descriptors_src_2fenum_2eproto,
    file_level_service_descriptors_src_2fenum_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_src_2fenum_2eproto_getter() {
  return &descriptor_table_src_2fenum_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_src_2fenum_2eproto(&descriptor_table_src_2fenum_2eproto);
namespace test {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Foo_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_src_2fenum_2eproto);
  return file_level_enum_descriptors_src_2fenum_2eproto[0];
}
bool Foo_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class MyMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<MyMessage>()._impl_._has_bits_);
  static void set_has_f(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

MyMessage::MyMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:test.MyMessage)
}
MyMessage::MyMessage(const MyMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MyMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.f_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.f_ = from._impl_.f_;
  // @@protoc_insertion_point(copy_constructor:test.MyMessage)
}

inline void MyMessage::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.f_){1}
  };
}

MyMessage::~MyMessage() {
  // @@protoc_insertion_point(destructor:test.MyMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MyMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MyMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:test.MyMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.f_ = 1;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MyMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .test.Foo f = 1 [default = DEFAULT];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::test::Foo_IsValid(val))) {
            _internal_set_f(static_cast<::test::Foo>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MyMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.MyMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .test.Foo f = 1 [default = DEFAULT];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_f(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.MyMessage)
  return target;
}

size_t MyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.MyMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .test.Foo f = 1 [default = DEFAULT];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_f());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MyMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MyMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MyMessage::GetClassData() const { return &_class_data_; }


void MyMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MyMessage*>(&to_msg);
  auto& from = static_cast<const MyMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:test.MyMessage)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_f()) {
    _this->_internal_set_f(from._internal_f());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MyMessage::CopyFrom(const MyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.MyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyMessage::IsInitialized() const {
  return true;
}

void MyMessage::InternalSwap(MyMessage* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.f_, other->_impl_.f_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MyMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_src_2fenum_2eproto_getter, &descriptor_table_src_2fenum_2eproto_once,
      file_level_metadata_src_2fenum_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::test::MyMessage*
Arena::CreateMaybeMessage< ::test::MyMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::test::MyMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
