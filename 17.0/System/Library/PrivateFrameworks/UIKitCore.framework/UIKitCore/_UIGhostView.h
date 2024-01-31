@class _UIPortalView, UIView;

@interface _UIGhostView : UIView

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) _UIPortalView *portalView;

+ (id)ghostViewForView:(id)a0;

- (id)initWithView:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
