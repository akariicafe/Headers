@class NSString, SBWindowSceneStatusBarSettingsAssertion, NSMutableSet, SBWindowSceneStatusBarManager;
@protocol SBScreenWakeAnimationControllerDelegate, SBFScreenWakeAnimationTarget;

@interface SBScreenWakeAnimationController : NSObject <SBFScreenWakeAnimationControlling> {
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalStatusBarAlpha;
    id<SBFScreenWakeAnimationTarget> _target;
    BOOL _preparingToAnimateWake;
    BOOL _animatingForWake;
    BOOL _animatingForSleep;
    BOOL _insideWakeCompletionBlock;
    BOOL _insideSleepCompletionBlock;
    int _animationToken;
    id /* block */ _wakeCompletionBlock;
    id /* block */ _sleepCompletionBlock;
    BOOL _animatingWallpaper;
    BOOL _animatingContent;
    BOOL _animatingBacklight;
    BOOL _ignoringInteractionEvents;
    BOOL _waitingForScreenUnblank;
    long long _lastBacklightChangeSource;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarAssertion;
    SBWindowSceneStatusBarManager *_statusBarManager;
    NSMutableSet *_temporaryDisabledReasons;
}

@property (weak, nonatomic) id<SBScreenWakeAnimationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)_animationSpeedForBacklightChangeSource:(long long)a0 isWake:(BOOL)a1;
+ (double)backlightFadeDurationForSource:(long long)a0 isWake:(BOOL)a1;

- (id)init;
- (void)dealloc;
- (void)_updateWakeEffectsForWake:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)succinctDescriptionBuilder;
- (void)_cleanupAnimationWhenInterruptingWaking:(BOOL)a0;
- (id)_animationSettingsForBacklightChangeSource:(long long)a0 isWake:(BOOL)a1;
- (void)_setInteractionEventsIgnored:(BOOL)a0;
- (void)_runCompletionHandlerForWake:(BOOL)a0 reason:(id)a1;
- (void)_setLastBacklightChangeSource:(long long)a0;
- (void)prepareToWakeForSource:(long long)a0 timeAlpha:(double)a1 statusBarAlpha:(double)a2 target:(id)a3 dateView:(id)a4 completion:(id /* block */)a5;
- (BOOL)isWakeAnimationInProgressForSource:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setScreenWakeTemporarilyDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(BOOL)a0;
- (void)_cleanupAnimationWhenInterruptingWaking:(BOOL)a0 force:(BOOL)a1;
- (void)_setRelevantLockScreenViewsHidden:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_startWakeIfNecessary;
- (BOOL)isSleepAnimationInProgress;
- (void)sleepForSource:(long long)a0 target:(id)a1 completion:(id /* block */)a2;
- (void)_startWakeAnimationsForWaking:(BOOL)a0 animationSettings:(id)a1;
- (void).cxx_destruct;
- (BOOL)isWakeAnimationInProgress;
- (id)succinctDescription;
- (void)_startWakeFromUnblankNotification;
- (BOOL)interruptSleepAnimationIfNeeded;
- (void)sleepForSource:(long long)a0 completion:(id /* block */)a1;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(BOOL)a0 force:(BOOL)a1;

@end
