@class NSArray;

@interface DMCDismissalAwareNavigationController : UINavigationController

@property (nonatomic) BOOL isPresentingAlert;
@property (copy, nonatomic) id /* block */ transitionCompletionBlock;
@property (nonatomic) BOOL isPushBlocked;
@property (nonatomic) BOOL pendingPushAnimated;
@property (retain, nonatomic) NSArray *pendingViewControllers;

- (id)rootViewController;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)blockNavigationPush;
- (void)presentAlert:(id)a0 animated:(BOOL)a1;
- (void)unblockNavigationPush;

@end
