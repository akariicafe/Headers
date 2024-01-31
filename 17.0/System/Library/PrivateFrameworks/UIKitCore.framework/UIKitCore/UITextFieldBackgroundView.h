@class UIColor;

@interface UITextFieldBackgroundView : UIView {
    BOOL _active;
    BOOL _enabled;
    float _progress;
}

@property (retain, nonatomic) UIColor *fillColor;

- (void)setActive:(BOOL)a0;
- (void)setProgress:(float)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImages;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;

@end
