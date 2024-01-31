@class UIStackView, UISwitch, UILabel, UISegmentedControl, UIButton;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;

@interface _PXFeedbackTapToRadarViewController : UIViewController

@property (retain, nonatomic) UIStackView *screenshotControlStackView;
@property (retain, nonatomic) UIStackView *diagnosticStackView;
@property (retain, nonatomic) UISegmentedControl *routesSegmentedControl;
@property (retain, nonatomic) UILabel *routesDescriptionLabel;
@property (retain, nonatomic) UISwitch *screenshotSwitch;
@property (retain, nonatomic) UISwitch *diagnoseSwitch;
@property (retain, nonatomic) UIButton *fileRadarButton;
@property (retain, nonatomic) id<_PXFeedbackTapToRadarViewControllerDelegate> delegate;

+ (id)_textColor;
+ (id)_buttonTintColor;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_didSelectCancelButton:(id)a0;
- (void)_didSelectFileRadarButton;

@end
