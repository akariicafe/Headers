@class NSMutableArray, NSLayoutConstraint, UICollectionView, STSSearchNoticeView, UIView, STSGridLayout, UIActivityIndicatorView;

@interface STSPickerView : UIView {
    STSGridLayout *_gridLayout;
    UIActivityIndicatorView *_activityIndicator;
    double _lastContentOffsetY;
    BOOL _isDeceleratingQuickly;
    NSMutableArray *_constraints;
    NSLayoutConstraint *_headerTopConstraint;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) STSSearchNoticeView *overlayView;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) BOOL showActivityIndicator;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_updateContentInset;
- (void)scrollToTopWithAnimation:(BOOL)a0;
- (void)updateContentOffset:(double)a0;
- (void)updateHeaderPositionOnDecelerationEnded;
- (void)updateHeaderPositionOnDraggingBegan;
- (void)updateHeaderPositionOnDraggingEndedWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)updateHeaderPositionOnScroll;

@end
