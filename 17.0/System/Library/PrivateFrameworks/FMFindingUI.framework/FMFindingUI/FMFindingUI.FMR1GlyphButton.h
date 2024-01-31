@interface FMFindingUI.FMR1GlyphButton : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ normalBackgroundColor;
    void /* unknown type, empty encoding */ ringDisplayLink;
    void /* unknown type, empty encoding */ ringPerimiterAnimationSpring;
    void /* unknown type, empty encoding */ ringFadeAnimationSpring;
    void /* unknown type, empty encoding */ lastRenderTime;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ legend;
    void /* unknown type, empty encoding */ named;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)ringDisplayLinkUpdateWithDisplaylink:(id)a0;

@end
