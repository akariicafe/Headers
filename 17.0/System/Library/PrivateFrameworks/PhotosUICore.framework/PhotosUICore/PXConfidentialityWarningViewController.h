@class UILabel, UIVisualEffectView, UIButton;

@interface PXConfidentialityWarningViewController : UIViewController

@property (readonly, nonatomic) UIVisualEffectView *effectView;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_handleButton:(id)a0;
- (void)presentAsOverlayInWindowScene:(id)a0;

@end
