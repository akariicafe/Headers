@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel>

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) long long scrollRegime;
@property (readonly, nonatomic) long long scrollDecelerationRate;
@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly, nonatomic) BOOL alwaysBounceHorizontal;
@property (readonly, nonatomic) BOOL alwaysBounceVertical;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } horizontalScrollIndicatorInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } verticalScrollIndicatorInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestContentInsets;
@property (readonly, nonatomic) BOOL draggingPerformsScroll;
@property (readonly, nonatomic) double horizontalInterPageSpacing;
@property (readonly, nonatomic) unsigned long long changesOptions;

- (void)setAlwaysBounceVertical:(BOOL)a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)stopScrolling;
- (void)setHorizontalScrollIndicatorInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)description;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setAlwaysBounceHorizontal:(BOOL)a0;
- (void)setHorizontalInterPageSpacing:(double)a0;
- (void)setScrollRegime:(long long)a0;
- (void)didEndChangeHandling;
- (void)performChanges:(id /* block */)a0 options:(unsigned long long)a1;
- (void)setDraggingPerformsScroll:(BOOL)a0;
- (void)setScrollDecelerationRate:(long long)a0;

@end
