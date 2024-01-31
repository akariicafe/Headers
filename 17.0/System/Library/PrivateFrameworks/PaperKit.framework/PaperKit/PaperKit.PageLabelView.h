@interface PaperKit.PageLabelView : UIView {
    void /* unknown type, empty encoding */ blurEffect;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ timer;
}

- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)fadeOut;

@end
