@interface OFWeakReferenceHolder : NSObject

@property (readonly) id object;

+ (id)weakReferenceHolderWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
