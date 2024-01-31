@class NSString, DMCEnrollmentConfirmationView, DMCEnrollmentLinkLabelView, DMCEnrollmentTableViewTextFieldCell;
@protocol DMCEnrollmentAuthenticationViewControllerDelegate;

@interface DMCEnrollmentAuthenticationViewController : DMCEnrollmentTemplateTableViewController <UITextFieldDelegate, DMCDismissalAwareViewController>

@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *usernameCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *passwordCell;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long userInputSection;
@property (nonatomic) BOOL isDisplayingPasswordCell;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *bottomViewText;
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;
@property (retain, nonatomic) DMCEnrollmentLinkLabelView *bottomLinkView;
@property (weak, nonatomic) id<DMCEnrollmentAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isUsernameEditable) BOOL usernameEditable;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)setInProgress:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)continueButtonTapped;
- (void)textFieldDidChange:(id)a0;
- (void)_setupNavigationBar;
- (void)setBottomText:(id)a0;
- (void)leftBarButtonTapped:(id)a0;
- (void)viewControllerHasBeenDismissed;
- (void)showPasswordField:(BOOL)a0;
- (void)updateContinueButtonStatus;

@end
