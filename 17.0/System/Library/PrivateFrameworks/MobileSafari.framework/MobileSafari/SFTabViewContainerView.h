@class NSIndexSet, NSMutableDictionary;
@protocol SFTabViewContainerViewDataSource;

@interface SFTabViewContainerView : UIView {
    long long _childCount;
    NSMutableDictionary *_childIndexToViewMap;
    struct _NSRange { unsigned long long location; unsigned long long length; } _visibleRange;
}

@property (nonatomic) double contentOffset;
@property (weak, nonatomic) id<SFTabViewContainerViewDataSource> dataSource;
@property (readonly, nonatomic) NSIndexSet *visibleChildIndexes;
@property (nonatomic) BOOL extendsVisibleRange;

- (id)init;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)convertIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForChildAtIndex:(long long)a0;
- (void)reloadDataWithPostUpdateActions:(id /* block */)a0;
- (void)reloadViewsAtIndexes:(id)a0;
- (void)revealChildAtFractionalIndex:(double)a0;
- (void)revealChildAtIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRangeForContentOffset:(double)a0 nearestIndex:(long long *)a1;

@end
