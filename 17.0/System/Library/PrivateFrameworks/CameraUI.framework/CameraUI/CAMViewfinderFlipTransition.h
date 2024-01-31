@class CAMSnapshotView;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderFlipTransition : NSObject

@property (readonly, weak, nonatomic) id<CAMViewfinderTransitionable> _transitionableViewfinder;
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView;
@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView;
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID;

- (void)_getCurrentRadians:(out double *)a0 targetRadians:(out double *)a1 forDirection:(unsigned long long)a2 withAnimation:(id)a3 onFrontSnapshotLayer:(id)a4;
- (double)_backSnapshotTargetRadiansForDirection:(unsigned long long)a0 frontSnapshotRadians:(double)a1;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(id /* block */)a0;
- (void)performFlipTransitionWithDirection:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_cleanupFromFlipTransition;
- (void).cxx_destruct;
- (id)_snapshotFlipAnimationFromValue:(double)a0 toValue:(double)a1;
- (id)initWithTransitionableViewfinder:(id)a0;
- (double)_frontSnapshotTargetRadiansForDirection:(unsigned long long)a0 fromRadians:(double)a1;

@end
