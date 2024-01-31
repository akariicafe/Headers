@class CSTeachableMomentsContainerView, NSMutableDictionary, NSTimer, CSHomeAffordanceViewController, NSString, UITapGestureRecognizer;
@protocol SBUIBiometricResource, SBDashBoardHomeAffordanceAnimationViewProviding;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSTimer *fireOffAnimationTimer;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL updateTextLabelOnNextAnimation;
@property (retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels;
@property (nonatomic) BOOL controlCenterCoachingIsHidden;
@property (retain, nonatomic) UITapGestureRecognizer *homeAffordanceClickGestureRecognizer;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic) unsigned long long effectiveAnimationState;
@property (readonly, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (readonly, nonatomic) CSHomeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id<SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_addRepeatedAnimationWithProvider:(id /* block */)a0 toLayer:(id)a1;
+ (id)_animationKeyForKeyPath:(id)a0 iteration:(unsigned long long)a1 reset:(BOOL)a2;

- (void)_moveUpTimerForFiringAfterDelay:(double)a0;
- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateText:(id)a0;
- (void)dealloc;
- (void)_updateTextLabel;
- (void)_addControlCenterGrabberAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_addTextResetAnimation;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (BOOL)_shouldTeachAboutControlCenter;
- (void)_addControlCenterGlyphAnimation;
- (id)_homeAffordancePositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_removeNormalAnimationsForKeyPath:(id)a0 onLayer:(id)a1;
- (void)_updateEffectiveAnimationState;
- (unsigned long long)currentState;
- (void)loadView;
- (void)_cancelTimerAndResetAnimation;
- (void)aggregateAppearance:(id)a0;
- (void)_setupTimer;
- (void)_addTextAnimation;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_setupTimerWithDelay:(double)a0;
- (void)_addControlCenterGlyphResetAnimation;
- (void)_updateTextLabelIfNeeded;
- (void)_addHomeAffordanceAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (void).cxx_destruct;
- (id)_textPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_homeAffordanceClickRecognized:(id)a0;
- (void)_addControlCenterGrabberResetAnimation;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_addResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_contentSizeCategoryChanged;
- (void)_removeResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (id)_textAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_updateLegibilitySettings;
- (void)_setControlCenterTutorsHidden:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;

@end
