@class TSPKnownFieldReferencesHelper;

@interface TSPKnownFieldMessage : TSPKnownFieldStringValue {
    TSPKnownFieldReferencesHelper *_referencesHelper;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithFieldDescriptor:(const void *)a0 fieldInfo:(const void *)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a3;

@end
