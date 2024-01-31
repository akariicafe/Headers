@class UIColor;

@interface UICheckeredPatternView : UIView {
    UIColor *_patternColor;
    double _scale;
}

@property (retain, nonatomic) UIColor *checkerColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canDrawContent;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updatePatternColor;

@end
