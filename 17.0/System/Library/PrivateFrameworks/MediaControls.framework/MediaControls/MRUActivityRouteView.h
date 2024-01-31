@class UIImageView, MRUActivityArtworkView, NSLayoutConstraint;

@interface MRUActivityRouteView : UIView

@property (retain, nonatomic) NSLayoutConstraint *deviceIconViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *deviceIconViewHeightConstraint;
@property (readonly, nonatomic) UIImageView *deviceIconView;
@property (readonly, nonatomic) MRUActivityArtworkView *artworkView;
@property (nonatomic) double side;
@property (nonatomic, getter=isSideConstraintActive) BOOL sideConstraintActive;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void).cxx_destruct;

@end
