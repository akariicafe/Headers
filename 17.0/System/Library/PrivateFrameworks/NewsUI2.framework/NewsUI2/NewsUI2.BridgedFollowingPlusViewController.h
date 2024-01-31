@class UIViewController;

@interface NewsUI2.BridgedFollowingPlusViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)presentationControllerWillDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
