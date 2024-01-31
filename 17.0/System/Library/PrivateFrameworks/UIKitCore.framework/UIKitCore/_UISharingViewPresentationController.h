@interface _UISharingViewPresentationController : UIPopoverPresentationController

@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (nonatomic) BOOL suppressDismissalHandlerUnlessDimmingViewTapped;

- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
