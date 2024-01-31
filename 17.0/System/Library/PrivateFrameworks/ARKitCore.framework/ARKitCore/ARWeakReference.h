@interface ARWeakReference : NSProxy

@property (readonly, weak, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;
+ (void)_noOp;

- (id)initWithObject:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
