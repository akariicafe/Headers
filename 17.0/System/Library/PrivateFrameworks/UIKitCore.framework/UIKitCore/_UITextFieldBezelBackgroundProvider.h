@interface _UITextFieldBezelBackgroundProvider : _UITextFieldDrawingBackgroundProvider

+ (id)bezelStyleMetricsProvider;

- (long long)associatedBorderStyle;
- (id)preferredMetricsProvider;
- (void)addToTextField:(id)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
