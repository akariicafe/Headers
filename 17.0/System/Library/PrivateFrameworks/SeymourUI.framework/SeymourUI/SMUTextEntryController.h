@class SMUTextEntryTextField, NSString, UIView, UILabel, UISystemInputViewController, UIButton;

@interface SMUTextEntryController : UIViewController <UISystemInputViewControllerDelegate, SMUTextEntryController> {
    BOOL _isTouchEnabled;
    UIView *_preferredFocusedView;
    BOOL _hideAccessoryViews;
}

@property (readonly, nonatomic) UISystemInputViewController *systemInputViewController;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) UIButton *doneButton;
@property (readonly, nonatomic) SMUTextEntryTextField *textField;
@property (nonatomic) BOOL textFieldAllowsFocus;
@property (nonatomic) unsigned long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *doneText;
@property (copy, nonatomic) id /* block */ onCompletion;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (BOOL)_disableAutomaticKeyboardUI;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (void)systemInputViewController:(id)a0 didChangeAccessoryVisibility:(BOOL)a1;
- (void)systemInputViewControllerDidAcceptRecentInput:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)_doneButtonPressed:(id)a0;

@end
