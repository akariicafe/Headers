@class UIStackView, NSString, UIView, LAPasscodeField, LAPSPasscodeViewControllerConfiguration, LAPSPasscodeType, UIButton, UILabel, UIScrollView;
@protocol LAPSPasscodeViewControllerDelegate;

@interface LAPSPasscodeViewController : UIViewController <LAPSPasscodeOptionsViewControllerDelegate, LAPasscodeFieldDelegate> {
    LAPSPasscodeViewControllerConfiguration *_config;
    LAPSPasscodeType *_passcodeType;
    BOOL _isPasscodeRecoveryEnabled;
    LAPasscodeField *_passcodeFieldVC;
    UIScrollView *_scrollView;
    UIStackView *_stack;
    UILabel *_header;
    UILabel *_footer;
    UILabel *_errorCapsule;
    UIView *_errorCapsuleContainer;
    UIButton *_optionsButton;
    BOOL _isNextButtonEnabled;
}

@property (weak, nonatomic) id<LAPSPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHeader:(id)a0;
- (void)setFooter:(id)a0;
- (void)clear;
- (void)focus;
- (void)_setup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (BOOL)_canShowWhileLocked;
- (id)initWithConfiguration:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)willMoveToParentViewController:(id)a0;
- (void)_finishWithError:(id)a0;
- (id)navigationItem;
- (void)setErrorMessage:(id)a0;
- (void)hideSpinner;
- (void)showSpinner;
- (void)_cancel:(id)a0;
- (void)_setupNavigationItem;
- (void)_next:(id)a0;
- (void)unfocus;
- (BOOL)_isAccessibilityTextEnabled;
- (void)_setNextButtonEnabled:(BOOL)a0;
- (void)_setPasscodeType:(id)a0;
- (BOOL)_shouldShowNextButton;
- (void)_showPasscodeOptions:(id)a0;
- (long long)_styleWithPasscodeType:(id)a0;
- (void)_submitPasscode:(id)a0;
- (void)passcodeField:(id)a0 didChangePasscodeLength:(unsigned long long)a1;
- (void)passcodeField:(id)a0 didSubmitPasscode:(id)a1;
- (void)passcodeOptionsViewController:(id)a0 didSelectPasscodeType:(id)a1;
- (void)passcodeOptionsViewController:(id)a0 didSetPasscodeRecoveryEnabled:(BOOL)a1;
- (void)passcodeOptionsViewControllerDidDisappear:(id)a0;
- (void)shakeWithCompletion:(id /* block */)a0;

@end
