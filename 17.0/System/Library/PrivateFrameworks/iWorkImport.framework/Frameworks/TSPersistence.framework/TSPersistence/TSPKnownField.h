@interface TSPKnownField : NSObject <TSPForwardsCompatibleField> {
    int _type;
    int _number;
    struct FieldInfo { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1UL> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned long long> { int current_size_; int total_size_; void *arena_or_elements_; } object_references_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _object_references_cached_byte_size_; struct RepeatedField<unsigned long long> { int current_size_; int total_size_; void *arena_or_elements_; } data_references_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _data_references_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } known_field_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _known_field_version_cached_byte_size_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } known_field_feature_identifier_; struct FieldPath *path_; int type_; int unknown_field_rule_; int known_field_rule_; } _fieldInfo;
}

@property (readonly, nonatomic) BOOL hasKnownValues;
@property (readonly, nonatomic) BOOL hasUnknownValues;

+ (id)knownFieldWithFieldDescriptor:(const void *)a0 fieldInfo:(const void *)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a3;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (const void *)fieldInfo;
- (id)initWithFieldDescriptor:(const void *)a0 fieldInfo:(const void *)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a3;
- (void)mergeToMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a1;
- (void)mergeToUnknownFieldSet:(void *)a0;
- (void)updateMessageInfo:(void *)a0;

@end
