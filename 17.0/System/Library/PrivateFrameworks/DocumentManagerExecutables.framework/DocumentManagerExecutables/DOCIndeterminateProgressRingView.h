@class CABasicAnimation;

@interface DOCIndeterminateProgressRingView : UIView {
    CABasicAnimation *_spinnerAnimation;
}

+ (Class)layerClass;

- (void)_removeAllAnimations:(BOOL)a0;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateShapePath;

@end
