@class PKAuthenticator, NSString, UIAccessibilityElement, UIViewController, PKGlyphView, UILabel, UIButton;
@protocol PKAuthorizationCoverSheetViewControllerDelegate;

@interface PKAuthorizationCoverSheetViewController : UIViewController <PKAuthenticatorDelegate> {
    PKAuthenticator *_authenticator;
    long long _presentationSource;
    BOOL _isInvalid;
    BOOL _authenticating;
    BOOL _hasAttemptedBiometricAuth;
    BOOL _hasPresentedPasscodePrompt;
    long long _coachingState;
    BOOL _shouldUIBeShown;
    BOOL _shouldDrawGlyph;
    unsigned long long _currentState;
    BOOL _isWaitingForPasscodeUI;
    id /* block */ _showPasscodeUICompletion;
    id /* block */ _performSynchronizedFadeInAnimationBlock;
    PKGlyphView *_glyphView;
    UIButton *_enterPasscodeButton;
    UILabel *_titleLabelView;
    UILabel *_subtitleLabelView;
    UIAccessibilityElement *_textAccessibilityElement;
    UIAccessibilityElement *_passcodeAccessibilityElement;
    UIViewController *_passcodeViewController;
    id<PKAuthorizationCoverSheetViewControllerDelegate> _delegate;
}

@property (nonatomic) BOOL isErrorRecovery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)invalidate;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)startEvaluation;
- (void)_animateInPasscodeViewController;
- (void)_fallbackToPasscode;
- (id)_genericBiometricFailureLabelAccessibilityLabel:(BOOL)a0;
- (id)_genericBiometricLabelAccessibilityLabel:(BOOL)a0;
- (id)_genericBiometricUnavailableLabelAccessibilityLabel:(BOOL)a0;
- (id)_passcodeLabelAccessibilityLabel:(BOOL)a0;
- (void)_presentPasscodeToExitLockout;
- (void)_transitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)dismissPasscodeViewController;
- (void)fadeInUIAnimated:(BOOL)a0 performSynchronizedAnimation:(id /* block */)a1;
- (void)fadeOutUIWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 authenticator:(id)a1 source:(long long)a2;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;

@end
