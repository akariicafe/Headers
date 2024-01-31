@class TabOverviewItemView, NSArray, TabOverviewInterpolatedLocation, TabOverview, UIView, TabOverviewItem, TabOverviewInterpolatedValue;

@interface TabOverviewItemLayoutInfo : NSObject {
    NSArray *_interpolatedValues;
    BOOL _snapshotBlank;
    BOOL _visibleInTabOverview;
    BOOL _interactivelyInserted;
    TabOverview *_tabOverview;
    TabOverviewItem *_tabOverviewItem;
    UIView *_borrowedContentView;
    double _borrowedContentHeaderHeight;
    TabOverviewItemView *_itemView;
    double _interactiveInsertionProgress;
    double _alpha;
    double _snapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedSnapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedCornerRadius;
    TabOverviewInterpolatedValue *_interpolatedHeightTransitionPercent;
    TabOverviewInterpolatedValue *_interpolatedBoundsLogScale;
    UIView *_attachedView;
    double _dimmingAlpha;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _snapshotFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _attachedViewReferenceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _closeLastLayoutLocation;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _closeStartLocation;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
