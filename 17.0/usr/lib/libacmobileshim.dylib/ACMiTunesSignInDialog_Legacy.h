@class NSString, UITextField;

@interface ACMiTunesSignInDialog_Legacy : ACMiTunesSignInDialog <acmAlertViewDelegateProtocol>

@property (retain, nonatomic) UITextField *editingTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)didPresentAlertView:(id)a0;
- (void)willPresentAlertView:(id)a0;
- (void)handleRotation;
- (void)acmAlertViewWillBecomeInvisible;
- (void)acmAlertViewWillBecomeVisible;
- (void)handleTextFieldShouldReturnOnNonPasswordField;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })passwordFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })userNameFrame;

@end
