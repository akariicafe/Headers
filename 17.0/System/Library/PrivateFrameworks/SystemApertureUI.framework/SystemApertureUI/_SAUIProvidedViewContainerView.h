@class _SAUIPortalView, SAUIElementView, UIView;

@interface _SAUIProvidedViewContainerView : UIView {
    _SAUIPortalView *_portalView;
    struct CGSize { double width; double height; } _lastSize;
}

@property (retain, nonatomic) UIView *providedView;
@property (readonly, nonatomic) BOOL portalsProvidedView;
@property (weak, nonatomic) SAUIElementView *elementView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
