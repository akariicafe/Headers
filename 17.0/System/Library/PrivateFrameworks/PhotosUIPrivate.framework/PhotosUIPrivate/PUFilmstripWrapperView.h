@class NSNumber, PUFilmstripView, UIView;

@interface PUFilmstripWrapperView : UIView

@property (nonatomic, setter=setAnimating:) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (retain, nonatomic) PUFilmstripView *filmstripView;
@property (nonatomic, setter=setExpanded:) BOOL isExpanded;
@property (nonatomic, setter=setExpandedSize:) struct CGSize { double width; double height; } expandedSize;
@property (copy, nonatomic) NSNumber *anchoredLeft;
@property (readonly, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFilmstripView:(id)a0 leavingPreviousViewInPlace:(BOOL)a1;

@end
