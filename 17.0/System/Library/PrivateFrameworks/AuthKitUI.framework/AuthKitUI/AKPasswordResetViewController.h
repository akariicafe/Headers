@class UIScrollView, UIStackView, UIImageView, UIActivityIndicatorView, UILabel, UIView, UIButton;
@protocol UITraitChangeRegistration, AKProfileImageProviding, AKPasswordResetViewControllerDelegate;

@interface AKPasswordResetViewController : UIViewController

@property (weak, nonatomic) UIView *titleView;
@property (weak, nonatomic) UILabel *serviceNameLabel;
@property (weak, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) UIScrollView *contentScrollView;
@property (weak, nonatomic) UIStackView *contentView;
@property (weak, nonatomic) UIImageView *profilePictureImageView;
@property (weak, nonatomic) UIImageView *keyIconImageView;
@property (weak, nonatomic) UILabel *screenTitleLabel;
@property (weak, nonatomic) UILabel *screenSummaryLabel;
@property (weak, nonatomic) UIView *footerView;
@property (weak, nonatomic) UIButton *resetMyPasswordButton;
@property (weak, nonatomic) UIButton *helpSomeoneElseButton;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (nonatomic) BOOL showResetMyPasswordButtonLoading;
@property (nonatomic) BOOL showHelpSomeoneElseButtonLoading;
@property (retain, nonatomic) id<AKProfileImageProviding> imageProvider;
@property (weak, nonatomic) id<AKPasswordResetViewControllerDelegate> delegate;

- (void)stopLoading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_startLoading;
- (void)_applyStyle;
- (void)didSelectClose:(id)a0;
- (void)_applyLocalization;
- (id)_helpSomeonElseButtonTitle;
- (id)_helpSomeoneElseButtonConfiguration;
- (void)_loadProfilePicture;
- (id)_resetMyPasswordButtonConfiguration;
- (id)_resetMyPasswordButtonTitle;
- (void)didSelectHelpSomeoneElse:(id)a0;
- (void)didSelectResetMyPassword:(id)a0;
- (id)initWithImageProvider:(id)a0;

@end
