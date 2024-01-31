@class OBPrivacyLinkController, NSString, UIActivityIndicatorView, UILabel, UIScrollView, UIView;

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (nonatomic, getter=isActivityIndicatorHidden) BOOL activityIndicatorHidden;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLayout;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_textStyle;
- (long long)_activityIndicatorViewStyle;
- (void)_updateTextColor;
- (BOOL)_shouldUseScrollView;
- (id)initWithSpinnerText:(id)a0;
- (void)updateDirectionalLayoutMargins;

@end
