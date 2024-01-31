@class UIColor, NSArray, UIImageView, UIImage, UIToolbar, UIView, NSString;
@protocol ACMSignInDialogDelegate;

@interface ACMSignInDialogSimple_Modern : ACMSignInDialogCustom <ACMSignInDialogSimpleProtocol>

@property (readonly, nonatomic) UIImage *iForgotImage;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) NSArray *burButtonItems;
@property (retain, nonatomic) UIView *container;
@property (readonly, nonatomic) double widgetConstraintMultiplier;
@property (readonly, nonatomic) double widgetConstraintConstant;
@property (retain, nonatomic) UIImage *logo;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *accountNameFieldPlaceholder;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (id)tintColor;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (id)widget;
- (void)viewDidAppear:(BOOL)a0;
- (id)darkTextColor;
- (id)passwordField;
- (BOOL)canSignIn;
- (id)accountNameField;
- (void)buildConstraints;
- (void)buildHorizontalConstraints;
- (void)buildVerticalConstraints;
- (void)buildWidgetContentGroupHorizontalConstraints;
- (void)buildWidgetContentGroupVerticalConstraints;
- (void)checkFields;
- (id)createCancelItem;
- (id)createIForgotItem;
- (id)darkDisabledTextColor;
- (void)disableControls:(BOOL)a0;
- (BOOL)shouldAuthenticateOnUserInput;
- (BOOL)shouldManuallyChangeStatusBarStyle;
- (BOOL)standardViewController;
- (BOOL)userNameFieldEditable;
- (Class)widgetClass;

@end
