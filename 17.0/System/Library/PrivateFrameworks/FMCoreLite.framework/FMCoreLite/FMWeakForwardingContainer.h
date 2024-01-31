@class NSObject;

@interface FMWeakForwardingContainer : NSObject

@property (readonly, weak, nonatomic) NSObject *target;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
