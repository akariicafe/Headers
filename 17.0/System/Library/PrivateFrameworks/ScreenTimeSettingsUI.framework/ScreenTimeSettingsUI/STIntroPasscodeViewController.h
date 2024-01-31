@class STIntroductionViewModel, NSString;

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate>

@property (readonly) STIntroductionViewModel *model;
@property (readonly) BOOL askForRecoveryAppleID;
@property (readonly, copy) NSString *altDSID;
@property (readonly, getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;
@property (readonly, copy) id /* block */ continueHandler;
@property long long passcodeState;
@property (retain) NSString *initialPasscode;
@property (getter=isNumeric) BOOL numeric;
@property unsigned long long numericLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (id)passcodeInputView;
- (id)_passcodeView;
- (void)nextButtonTapped;
- (void)_transitionToFirstPasscodePaneWithState:(long long)a0;
- (id)initWithIntroductionModel:(id)a0 askForRecoveryAppleID:(BOOL)a1 altDSID:(id)a2 isChildOrNotSignedIntoiCloud:(BOOL)a3 continueHandler:(id /* block */)a4;
- (void)passcodeTypeChanged:(BOOL)a0;
- (void)updatePasscodeType;
- (void)userEnteredPasscode:(id)a0;

@end
