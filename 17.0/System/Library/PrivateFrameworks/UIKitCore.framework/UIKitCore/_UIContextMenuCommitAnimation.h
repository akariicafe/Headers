@class _UIPortalView, _UIContextMenuCommitContainerView, UIView;

@interface _UIContextMenuCommitAnimation : NSObject

@property (retain, nonatomic) UIView *source;
@property (retain, nonatomic) UIView *destination;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *morphContainer;
@property (retain, nonatomic) UIView *sourceSnapshotView;
@property (retain, nonatomic) UIView *sourceTransformView;
@property (retain, nonatomic) UIView *destinationTransformView;
@property (retain, nonatomic) UIView *originalContentSnapshotView;
@property (retain, nonatomic) _UIPortalView *destinationContentPortalView;
@property (retain, nonatomic) _UIContextMenuCommitContainerView *animationContainer;
@property (nonatomic) unsigned long long animationCount;
@property (nonatomic) double sourceRadius;
@property (nonatomic) double destinationRadius;

- (void).cxx_destruct;
- (void)_prepareAnimationViews;
- (void)_prepareSnapshots;
- (void)animateWithAlongsideActions:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithSource:(id)a0 container:(id)a1;

@end
