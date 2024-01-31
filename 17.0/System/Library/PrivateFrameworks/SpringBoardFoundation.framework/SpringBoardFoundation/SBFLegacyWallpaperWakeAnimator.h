@class NSString, UIVisualEffectView;

@interface SBFLegacyWallpaperWakeAnimator : NSObject <SBFScreenWakeAnimationTarget>

@property (nonatomic) long long wakeState;
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_shouldHideWakeEffectViewAfterUpdate;
- (long long)_targetWakeStateForFadeIn:(BOOL)a0;
- (id)_wakeEffectsForAnimatingWakeState:(long long)a0;
- (id)_wakeEffectsForPersistentWakeState:(long long)a0;
- (void)removeAllWakeEffects;
- (void)updateWakeEffectsForWake:(BOOL)a0;
- (void)updateWakeEffectsForWake:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
