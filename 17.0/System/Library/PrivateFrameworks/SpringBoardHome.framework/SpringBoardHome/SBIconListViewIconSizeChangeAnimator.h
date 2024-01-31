@class NSString, SBHIconEditingSettings, SBIconView, UIView, NSMutableArray;

@interface SBIconListViewIconSizeChangeAnimator : SBIconListViewClusterAnimator <SBIconListLayoutAnimating> {
    NSMutableArray *_animationCompletionHandlers;
}

@property (readonly, nonatomic) SBHIconEditingSettings *iconEditingSettings;
@property (retain, nonatomic) UIView *snapshotContainerView;
@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) UIView *priorIconImageSnapshotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconListView:(id)a0 wantsAnimatedLayoutForIconView:(id)a1 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x0; double x1; } x0; double x1; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x2; BOOL x3; struct SBIconCoordinate { long long x0; long long x1; } x4; BOOL x5; BOOL x6; unsigned long long x7; })a2 alongsideAnimationBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)addAnimationCompletionHandler:(id /* block */)a0;
- (id)initWithIconView:(id)a0 priorIconImageSnapshotView:(id)a1;
- (void)prepareAnimationForListView:(id)a0;

@end
