@class UIBezierPath;

@interface _UITileLayer : CALayer {
    UIBezierPath *maskPath;
    _Atomic BOOL pendingDeferredOffscreenSetNeedsDisplay;
}

- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;

@end
