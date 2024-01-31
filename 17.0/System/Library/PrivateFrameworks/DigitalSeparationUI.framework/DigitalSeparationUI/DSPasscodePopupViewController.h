@class NSString, UIAlertController, NSLayoutConstraint, BFFPasscodeView;
@protocol DSNavigationDelegate;

@interface DSPasscodePopupViewController : UIViewController <BFFPasscodeInputViewDelegate>

@property (nonatomic) long long passcodeState;
@property (retain, nonatomic) NSString *passcodeNew;
@property (retain, nonatomic) NSString *passcodeOld;
@property (nonatomic, getter=isNumeric) BOOL numeric;
@property (nonatomic) unsigned long long numericLength;
@property (retain, nonatomic) BFFPasscodeView *passcodeView;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) UIAlertController *passcodeOptionAlertController;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPasscodeSet;

- (id)init;
- (void)reset;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)validatePIN:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (id)passcodeInputView;
- (void)_applyPasscode;
- (void)nextButtonTapped;
- (void)passcodeInput:(id)a0 tappedFooterButton:(id)a1;
- (id)_createAndShowAnimatedNavBarSpinner;
- (void)_commitPasscodeEntryTypeChange;
- (void)_setupFirstEntry;
- (void)_showWeakWarningAlert;
- (void)acceptWeakPasscode:(BOOL)a0;
- (void)configurePasscodeTypeUsingAnimations:(BOOL)a0;
- (void)userEnteredPasscode:(id)a0;
- (void)_animatePasscodeViewTransition;
- (void)_showPasswordRequirementAlertWithText:(id)a0;
- (void)_transitionToPasscodePaneWithState:(long long)a0 animationType:(unsigned long long)a1;
- (void)configurePasscodeOptionsSheet;
- (void)handleCurrentPasscodeEntry:(id)a0;
- (void)handleNewPasscodeEntry:(id)a0;
- (void)handlePasscodeConfirmationEntry:(id)a0;
- (void)handlePasscodeDoesNotMeetConstraints:(id)a0;
- (BOOL)optionsSheetIsEmpty;
- (void)pushNextPane;
- (BOOL)usesSimplePasscodeEntry;

@end
