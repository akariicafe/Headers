@class UIView, NSString, SBAttentionAwarenessClient, MTLumaDodgePillSettings, NSHashTable, SBSystemPointerInteractionManager, NSMutableSet, SBFHomeGrabberSettings, MTLumaDodgePillView;
@protocol SBHomeGrabberDelegate, SBHomeGrabberPointerClickDelegate;

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemPointerInteractionDelegate, SBMousePointerHardwareConnectionObserver> {
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    UIView *_pointerHitTestBlockingView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    BOOL _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _isSystemPointerInteractionEnabled;
    NSHashTable *_observers;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
}

@property (weak, nonatomic) id<SBHomeGrabberDelegate> delegate;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (nonatomic) BOOL autoHides;
@property (nonatomic, getter=isEdgeProtectEnabled) BOOL edgeProtectEnabled;
@property (nonatomic) long long colorBias;
@property (nonatomic) BOOL ignoresLuminance;
@property (nonatomic) BOOL suppressesBounce;
@property (readonly, nonatomic) double suggestedEdgeSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)updateStyle;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)a0;
- (void)clientDidResetForUserAttention:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (long long)_calculateLumaStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pointerInteractionHitTestRect;
- (void)setHidden:(BOOL)a0 forReason:(id)a1 withAnimationSettings:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculatePillFrame;
- (void)_animateToStyle:(long long)a0 disallowAdditive:(BOOL)a1 withAnimationSettings:(id)a2;
- (void)_setSystemPointerInteractionEnabled:(BOOL)a0;
- (void)resetAutoHide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_calculateStyle;
- (id)styleForRegion:(id)a0 forView:(id)a1;
- (void)_updatePresence:(long long)a0 style:(long long)a1 withAnimationSettings:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })grabberFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHidden;
- (void)mousePointerManager:(id)a0 hardwarePointingDeviceAttachedDidChange:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (id)regionAtLocation:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)_bounce;
- (BOOL)shouldBeginPointerInteractionRequest:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 forView:(id)a2;
- (void)_invalidateInitialAutoHideTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settings:(id)a1 shouldEnableGestures:(BOOL)a2;
- (void).cxx_destruct;
- (id)_effectiveLumaDodgePillSettings;
- (void)resetAutoHideWithInitialDelay:(double)a0;
- (void)turnOnAutoHideWithInitialDelay:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)turnOffAutoHideWithDelay:(double)a0;
- (BOOL)_autohideEffectivelyEnabled;
- (id)_newPillView;
- (void)_updateIdleTouchAwarenessClient;
- (void)forgetBackgroundLuminance;
- (struct CGSize { double x0; double x1; })suggestedSizeForContentWidth:(double)a0;
- (void)layoutSubviews;
- (id)_animationSettingsForTransitionFromStyle:(long long)a0 toStyle:(long long)a1 fromPresence:(long long)a2 toPresence:(long long)a3;
- (void)_noteActiveForTouchThatShouldUnhideImmediately:(BOOL)a0;
- (BOOL)_edgeProtectEffectivelyEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldEnableGestures:(BOOL)a1;
- (void)addObserver:(id)a0;
- (BOOL)_bounceHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (long long)_calculatePresence;
- (void)_notifyObserversOfDidUpdateHidden;
- (void)updateStyleWithAnimationSettings:(id)a0;

@end
