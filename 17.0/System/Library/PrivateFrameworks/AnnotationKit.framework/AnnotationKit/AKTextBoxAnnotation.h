@class UIColor;

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    UIColor *_highlightColor;
}

+ (id)defaultPlaceholderText;
+ (BOOL)deleteAfterEditingIfEmpty;

- (id)init;
- (void)setHighlightColor:(id)a0;
- (id)highlightColor;
- (void).cxx_destruct;
- (id)displayName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
