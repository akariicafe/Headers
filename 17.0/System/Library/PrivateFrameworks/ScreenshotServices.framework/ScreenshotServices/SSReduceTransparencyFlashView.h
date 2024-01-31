@class UIView;

@interface SSReduceTransparencyFlashView : SSFlashView {
    id /* block */ _oldCompletionBlock;
    UIView *_colorView;
}

+ (double)expectedAnimationDurationForStyle:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)flashWithCompletion:(id /* block */)a0;

@end
