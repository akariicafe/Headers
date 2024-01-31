@interface SVVideoPlayButton : SVButton

+ (id)playImage;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBackgroundColor;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)displayAsPaused;

@end
