@class NSArray, NSString;

@interface ICScrollViewDelegateMultiplexer : NSProxy <UIScrollViewDelegate>

@property (copy, nonatomic) NSArray *wrappedForwardingTargets;
@property (readonly, nonatomic) NSArray *forwardingTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithForwardingTargets:(id)a0;

@end
