@interface _UITextFieldLineBackgroundProvider : _UITextFieldDrawingBackgroundProvider

+ (id)lineStyleMetricsProvider;

- (long long)associatedBorderStyle;
- (id)preferredMetricsProvider;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
