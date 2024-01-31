@interface PaperKit.CanvasElementPDFAnnotation : PDFAnnotation {
    void /* unknown type, empty encoding */ render;
    void /* unknown type, empty encoding */ containerBounds;
    void /* unknown type, empty encoding */ _akAnnotation;
    void /* unknown type, empty encoding */ writePaperKitAnnotation;
    void /* unknown type, empty encoding */ subelementId;
    void /* unknown type, empty encoding */ writingAKAnnotation;
    void /* unknown type, empty encoding */ _interactiveBackgroundColor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forType:(id)a1 withProperties:(id)a2;
- (void)_addAKAnnotationToDictionary:(struct __CFDictionary { } *)a0;
- (id)akAnnotation;
- (Class)annotationSubclassForPopup;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initCommonWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAnnotationDictionary:(void *)a0 forPage:(id)a1;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 forPage:(id)a1;
- (id)interactiveBackgroundColor;
- (void)setIsFullyConstructed:(BOOL)a0;

@end
