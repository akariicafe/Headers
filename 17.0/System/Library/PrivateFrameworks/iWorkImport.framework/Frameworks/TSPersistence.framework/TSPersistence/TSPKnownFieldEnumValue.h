@interface TSPKnownFieldEnumValue : TSPKnownFieldNumericValue {
    struct shared_ptr<google::protobuf::UnknownFieldSet> { struct UnknownFieldSet *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFieldSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)hasUnknownValues;
- (id)initWithFieldDescriptor:(const void *)a0 fieldInfo:(const void *)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a3 unknownFieldSet:(void *)a4;
- (void)mergeToMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a1;
- (void)mergeToUnknownFieldSet:(void *)a0;

@end
