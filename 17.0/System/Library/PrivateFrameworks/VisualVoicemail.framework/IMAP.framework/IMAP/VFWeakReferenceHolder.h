@protocol NSObject;

@interface VFWeakReferenceHolder : NSObject {
    id<NSObject> _reference;
}

+ (id)weakReferenceWithObject:(id)a0;

- (id)reference;
- (void)dealloc;
- (id)_initWithObject:(id)a0;
- (id)retainedReference;

@end
