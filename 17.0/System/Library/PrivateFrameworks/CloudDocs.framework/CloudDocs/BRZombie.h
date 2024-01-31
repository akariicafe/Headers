@interface BRZombie : NSProxy

+ (void)turnObjectIntoZombie:(id)a0;

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;

@end
