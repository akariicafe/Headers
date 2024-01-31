@interface TeaUI.RadialGradientSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver> {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSize;
    void /* unknown type, empty encoding */ overscrollPinPosition;
}

- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)applyLayoutAttributes:(id)a0;
- (void)gutterViewBoundsDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
