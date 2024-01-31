@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
}

+ (Class)_visualProviderClass;

- (long long)buttonType;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateState;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canDrawContent;
- (void).cxx_destruct;
- (id)_contentBackgroundColor;
- (void)_invalidatePaths;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fillColor:(id)a1;

@end
