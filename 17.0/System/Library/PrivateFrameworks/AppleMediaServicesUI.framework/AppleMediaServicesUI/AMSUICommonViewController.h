@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (nonatomic, getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) BOOL movingToParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;

- (id)init;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)dealloc;
- (void)loadView;
- (void)setChildViewController:(id)a0;
- (void)unsetChildViewController:(id)a0;

@end
