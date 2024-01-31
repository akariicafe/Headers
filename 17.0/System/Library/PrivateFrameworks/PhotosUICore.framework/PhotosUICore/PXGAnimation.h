@class PXGTransition, PXGLayout, PXGLayoutSnapshot, NSDictionary, CASpringAnimation;
@protocol PXGAnimationDelegate;

@interface PXGAnimation : NSObject

@property (readonly, weak, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) double effectiveDuration;
@property (weak, nonatomic) PXGTransition *transition;
@property (retain, nonatomic) CASpringAnimation *springAnimation;
@property (nonatomic) float springAnimationInitialProgress;
@property (nonatomic) float springAnimationProgressMultiplier;
@property (retain, nonatomic) PXGLayoutSnapshot *fromSnapshot;
@property (retain, nonatomic) PXGLayoutSnapshot *toSnapshot;
@property (nonatomic) double duration;
@property (nonatomic) long long curve;
@property (nonatomic) float dampingRatio;
@property (nonatomic) long long numberOfOscillations;
@property (nonatomic) double maximumDistance;
@property (nonatomic) BOOL supportsSpriteTransfer;
@property (nonatomic, setter=setDoubleSided:) BOOL isDoubleSided;
@property (nonatomic) BOOL supportsPresentationAdjustment;
@property (nonatomic) long long scope;
@property (retain, nonatomic) id<PXGAnimationDelegate> delegate;
@property (retain, nonatomic) NSDictionary *userData;
@property (nonatomic) unsigned int highFrameRateReason;

- (id)init;
- (id)initWithLayout:(id)a0;
- (id)description;
- (void)noteDidComplete;
- (void).cxx_destruct;

@end
