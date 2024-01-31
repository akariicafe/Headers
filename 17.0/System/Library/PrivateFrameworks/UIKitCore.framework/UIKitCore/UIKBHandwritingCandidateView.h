@interface UIKBHandwritingCandidateView : UIKBCandidateView

+ (double)shadowYForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shadowHeight:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void)updateCandidateKey;
- (void)updateForKeyplane:(id)a0 key:(id)a1;

@end
