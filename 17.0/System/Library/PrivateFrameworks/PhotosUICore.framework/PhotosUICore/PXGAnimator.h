@class PXGAnimatorLayout, PXGLayoutSnapshot, PXGIndexSetArray, PXGSpriteDataStore, PXGAnimationDataStore, NSMutableArray;

@interface PXGAnimator : NSObject {
    PXGAnimationDataStore *_animationDataStore;
    PXGAnimatorLayout *_animatorLayout;
    double _lastUpdateTime;
    unsigned int _numberOfProlongatedSprites;
    PXGIndexSetArray *_spriteIndexesByGroupIndex;
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;
    BOOL _isSkippingAnimations;
    NSMutableArray *_reusableSnapshotSpriteDataStores;
}

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) PXGLayoutSnapshot *previousLayoutSnapshot;
@property (nonatomic) double speed;
@property (readonly, nonatomic) long long computeCount;
@property (readonly, nonatomic) BOOL hasCriticalAnimations;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) long long preferredFramesPerSecond;

- (id)init;
- (void)dealloc;
- (void)computeAnimationStateForTime:(double)a0 inputSpriteDataStore:(id)a1 inputChangeDetails:(id)a2 inputLayout:(id)a3 viewportShift:(struct CGPoint { double x0; double x1; })a4 animationPresentationSpriteDataStore:(id)a5 animationTargetSpriteDataStore:(id)a6 animationChangeDetails:(out id *)a7 animationLayout:(out id *)a8;
- (void)_stopAllAnimations;
- (id)_dequeueSpriteDataStore;
- (void)retargetAnimationsAfterStartTime:(double)a0 newStartTime:(double)a1;
- (id)_animationByAnimationIndexForAnimations:(id)a0;
- (void)_returnForReuseSpriteDataStore:(id)a0;
- (void).cxx_destruct;

@end
