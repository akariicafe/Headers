@class NSString, NAFuture;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) NAFuture *completionFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
