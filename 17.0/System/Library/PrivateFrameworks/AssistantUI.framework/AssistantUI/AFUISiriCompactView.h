@class UIView, NSString, UILongPressGestureRecognizer, AFUITouchInputView, AFUISiriEyesFreeView, AFUISiriCompactDimmingView, AFUIPasscodeContainerView, SiriUIContentButton, SiriUIBackgroundBlurViewController, SUICOrbView;
@protocol AFUISiriContentDelegate, AFUISiriCompactViewDelegate;

@interface AFUISiriCompactView : UIView <UIGestureRecognizerDelegate, SiriUIBackgroundBlurViewControllerDelegate, AFUIPasscodeContainerViewDelegate, AFUITouchInputViewDelegate, AFUISiriContent, SUICOrbViewControlling> {
    UIView *_orbViewContainer;
    SUICOrbView *_orbView;
    AFUITouchInputView *_touchInputView;
    UIView *_voiceActivationMaskView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    AFUISiriCompactDimmingView *_dimmingBackdropView;
    id<AFUISiriContentDelegate> _siriContentDelegate;
    id<AFUISiriCompactViewDelegate> _compactViewDelegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dockFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _orbViewContainerFrame;
    SiriUIContentButton *_reportBugButton;
    UIView *_siriXIndicator;
    AFUISiriEyesFreeView *_eyesFreeView;
    BOOL _isEyesFree;
    UIView *_blurringAndLockContainer;
    SiriUIBackgroundBlurViewController *_fullScreenBlurViewController;
    AFUIPasscodeContainerView *_lockContainerView;
    BOOL _remoteContentViewHidden;
    BOOL _lockViewHidden;
    BOOL _auxiliaryViewsHidden;
    BOOL _inShowUnlockViewAnimation;
    BOOL _inHideUnlockViewAnimation;
    BOOL _inFluidDismissal;
    BOOL _ignoreSiriSessionUpdates;
    BOOL _shouldUpdatePowerLevel;
    BOOL _isAttending;
}

@property (readonly, nonatomic) UIView *foregroundContainerView;
@property (readonly, nonatomic, getter=isBlurViewVisible) BOOL blurViewVisible;
@property (readonly, nonatomic, getter=isDimmingViewVisible) BOOL dimmingViewVisible;
@property (readonly, nonatomic, getter=shouldRequestStatusBar) BOOL requestStatusBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UIView *remoteContentView;

+ (void)_animateView:(id)a0 fromYPosition:(double)a1 toYPosition:(double)a2 fade:(long long)a3 completion:(id /* block */)a4;

- (void)dealloc;
- (void)setDockFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_playHaptic;
- (void)setRequestHandlingStatus:(unsigned long long)a0;
- (void)_orbButtonHeld:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForOrbView;
- (void)_animateLockViewIsAnimatingIn:(BOOL)a0 completion:(id /* block */)a1;
- (void)_constructAndAddBugReportButtonWithImage:(id)a0;
- (void)_constructAndAddSiriXIndicator;
- (void)_handleTouchEndedForNonAttendingConfiguration;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_lockViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orbViewContainerFrame;
- (double)_originXForOrbContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_setUpEyesFreePresentation:(long long)a0;
- (void)_setupBugReportButtonIfNeeded;
- (void)_setupContentViews;
- (void)_setupVoiceActivationMaskView;
- (BOOL)_shouldShowBugReportButton;
- (struct CGSize { double x0; double x1; })_sizeForOrbViewContainer;
- (void)animateOrbViewDismissalWithCompletion:(id /* block */)a0;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)a0;
- (void)backgroundBlurViewController:(id)a0 didSetBlurVisibilityTo:(BOOL)a1;
- (double)bugReportDimension;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 compactViewDelegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 eyesFreeMode:(long long)a1;
- (void)passcodeView:(id)a0 animateShowPasscodeWithCompletionHandler:(id /* block */)a1;
- (BOOL)passcodeView:(id)a0 attemptUnlockWithPassword:(id)a1;
- (void)passcodeView:(id)a0 hideLockViewWithResult:(long long)a1 unlockCompletionHandler:(id /* block */)a2;
- (void)reduceOrbOpacity:(BOOL)a0;
- (void)requestBlurVisible:(BOOL)a0 reason:(long long)a1 fence:(id)a2;
- (void)setAuxiliaryViewsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setContentViewsAlpha:(double)a0;
- (void)setFullScreenDimmingLayerVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setInFluidDismissal:(BOOL)a0;
- (void)setInputPowerLevel:(float)a0;
- (void)setOutputPowerLevel:(float)a0;
- (void)setSiriContentDelegate:(id)a0;
- (void)setVoiceActivationMaskViewVisible:(BOOL)a0;
- (void)showPasscodeUnlockWithStatusText:(id)a0 subtitle:(id)a1 completionHandler:(id /* block */)a2 unlockCompletionHandler:(id /* block */)a3;
- (double)siriXIndicatorDimension;
- (void)touchesBeganForInputView:(id)a0;
- (void)touchesEndedForInputView:(id)a0;

@end
