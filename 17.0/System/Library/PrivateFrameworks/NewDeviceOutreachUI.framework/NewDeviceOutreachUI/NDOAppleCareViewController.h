@class UIStackView, NSString, UIButton, NSLayoutConstraint, NDODeviceInfo, UILabel;
@protocol NDOAppleCareFlowDelegate;

@interface NDOAppleCareViewController : UIViewController <NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol>

@property (retain) NDODeviceInfo *deviceInfo;
@property unsigned long long presentationType;
@property (retain) NSString *source;
@property (retain) NSString *deeplinkParams;
@property (weak, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (weak, nonatomic) UIStackView *comboStackView;
@property (weak, nonatomic) UILabel *acHeaderLabel;
@property (weak, nonatomic) UILabel *promoTextLabel;
@property (weak, nonatomic) UILabel *detailsTextLabel;
@property (weak, nonatomic) UILabel *detailsText2Label;
@property (weak, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) UIButton *notNowButton;
@property (weak, nonatomic) UIButton *continueButton;
@property (weak) id<NDOAppleCareFlowDelegate> presentor;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)cancelPressed:(id)a0;
- (void)okButtonPressed;
- (void)completeWithStatus:(unsigned long long)a0;
- (void)notNowPressed:(id)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0 params:(id)a1;
- (void)completeWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)getAppleCarePressed:(id)a0;
- (id)initWithDeviceInfo:(id)a0 presentationType:(unsigned long long)a1;
- (id)initWithDeviceInfo:(id)a0 presentationType:(unsigned long long)a1 source:(id)a2 deeplinkParams:(id)a3;
- (id)initWithWarranty:(id)a0;
- (id)initWithWarranty:(id)a0 presentationType:(unsigned long long)a1;
- (id)initWithWarranty:(id)a0 presentationType:(unsigned long long)a1 serialNumber:(id)a2;
- (void)updatePromotionLabelWithWarranty:(id)a0;
- (void)webviewFinishedWithCompletion:(unsigned long long)a0;

@end
