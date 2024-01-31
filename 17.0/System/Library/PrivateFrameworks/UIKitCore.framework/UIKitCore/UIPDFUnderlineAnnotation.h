@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (Class)viewClass;
- (int)annotationType;
- (void)drawLayerRotated:(id)a0 inContext:(struct CGContext { } *)a1 selection:(id)a2 rectangles:(unsigned long long)a3;
- (void)drawLayerUpright:(id)a0 inContext:(struct CGContext { } *)a1 selection:(id)a2 rectangles:(unsigned long long)a3;
- (BOOL)recognizeGestures;

@end
