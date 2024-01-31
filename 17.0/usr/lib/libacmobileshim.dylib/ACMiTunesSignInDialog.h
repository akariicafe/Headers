@class NSString, UIAlertView;
@protocol ACMSignInDialogDelegate;

@interface ACMiTunesSignInDialog : ACMSignInDialog <ACMiTunesSignInDialogProtocol, UIAlertViewDelegate>

@property (retain) NSString *titleField;
@property (readonly, nonatomic) UIAlertView *signInDialog;
@property BOOL isShown;
@property (readonly) BOOL isPortraitMode;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userNameFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } passwordFrame;
@property (nonatomic) long long previousInterfaceOrientation;
@property (nonatomic) struct CGSize { double width; double height; } titleStringSize;
@property (nonatomic) BOOL isUserNameEditable;
@property (retain, nonatomic) NSString *alertViewPrompt;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)statusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)cancel;
- (void)didRotate:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)didPresentAlertView:(id)a0;
- (void)handleRotation;
- (BOOL)changeTitleStringIfNeeded;
- (id)dialogTitle;
- (void)disableControls:(BOOL)a0;
- (void)handleTextFieldShouldReturnOnNonPasswordField;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
