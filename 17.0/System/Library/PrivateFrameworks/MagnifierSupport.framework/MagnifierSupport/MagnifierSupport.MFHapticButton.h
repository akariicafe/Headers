@interface MagnifierSupport.MFHapticButton : UIButton {
    void /* unknown type, empty encoding */ buttonFeedbackGenerator;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)shutterButtonDown:(id)a0;

@end
