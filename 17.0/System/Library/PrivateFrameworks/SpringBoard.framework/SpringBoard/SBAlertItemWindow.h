@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureWindow

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier;

- (BOOL)_canBecomeKeyWindow;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithWindowScene:(id)a0 role:(id)a1 debugName:(id)a2 alertLayoutPresentationVerifier:(id)a3;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
