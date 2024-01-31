@class UITapGestureRecognizer;

@interface PREditingCloseBoxButton : PREditingTitledButton

@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestPadding;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })backgroundInsets;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
