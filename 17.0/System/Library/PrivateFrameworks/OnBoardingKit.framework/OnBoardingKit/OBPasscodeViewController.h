@class OBPasscodeInputView, NSString, NSLayoutConstraint;
@protocol OBPasscodeViewControllerDelegate;

@interface OBPasscodeViewController : OBWelcomeController <OBPasscodeInputViewDelegate>

@property (retain, nonatomic) OBPasscodeInputView *passcodeInputView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic) BOOL requiresCompletion;
@property (weak, nonatomic) id<OBPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_completionTapped:(id)a0;
- (void)_updateCompletionButtonEnabledStateForPasscode:(id)a0;
- (double)_verticalPaddingForInputView;
- (void)clearPasscodeEntry;
- (void)configureForPasscodeEntry:(unsigned long long)a0 length:(long long)a1;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (void)passcodeInput:(id)a0 willChangeContents:(id)a1;
- (void)shakePasscodeEntry;

@end
