@class SFFluidCollectionReuseableView, SFFluidCollectionViewLayoutAttributes, UIViewVectorAnimatableProperty, NSTimer, UIViewFloatAnimatableProperty, SFFluidCollectionView, NSMutableDictionary;
@protocol SFFluidCollectionViewTrackedUpdateToken;

@interface SFFluidCollectionViewItemInfo : NSObject {
    unsigned long long _animationCount;
    NSMutableDictionary *_customInterpolatedProperties;
}

@property (weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (retain, nonatomic) SFFluidCollectionReuseableView *view;
@property (copy, nonatomic) SFFluidCollectionViewLayoutAttributes *layoutAttributesFromLayout;
@property (copy, nonatomic) SFFluidCollectionViewLayoutAttributes *layoutAttributesFromInteraction;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *effectiveLayoutAttributes;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *targetLayoutAttributes;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *lastAppliedTargetLayoutAttributes;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *layoutAttributesFromInterpolation;
@property (readonly, nonatomic) id<SFFluidCollectionViewTrackedUpdateToken> trackedUpdateToken;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *trackedUpdateInitialAttributes;
@property (readonly, nonatomic) SFFluidCollectionViewLayoutAttributes *trackedUpdateInterpolatedAttributes;
@property (nonatomic) double trackedUpdateProgress;
@property (nonatomic) BOOL needsUpdateLayoutAttributesFromLayout;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) UIViewVectorAnimatableProperty *interpolatedCenter;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *interpolatedZPosition;
@property (retain, nonatomic) UIViewVectorAnimatableProperty *interpolatedSize;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *interpolatedAlpha;
@property (retain, nonatomic) UIViewVectorAnimatableProperty *interpolatedTransform;
@property (retain, nonatomic) NSTimer *delayedAnimationTimer;
@property (readonly, nonatomic) BOOL hasAnimations;

- (id)init;
- (void).cxx_destruct;
- (void)didBeginAnimation;
- (void)didEndAnimation;
- (id)_customInterpolatedFloatProperty:(id)a0;
- (id)_customInterpolatedPointProperty:(id)a0;
- (id)_customInterpolatedRectProperty:(id)a0;
- (id)_customInterpolatedSizeProperty:(id)a0;
- (id)_customInterpolatedVectorProperty:(id)a0 creationBlock:(id /* block */)a1 presentationValueBlock:(id /* block */)a2;
- (void)beginTrackedUpdateWithToken:(id)a0;
- (void)endTrackedUpdate;
- (void)updateInterpolatedValuesWithTargetAttributes;

@end
