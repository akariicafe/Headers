@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject

@property (readonly, weak, nonatomic) AMSURLSession *session;
@property (weak, nonatomic) id delegate;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)invalidate;
- (id)initWithSession:(id)a0 delegate:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
