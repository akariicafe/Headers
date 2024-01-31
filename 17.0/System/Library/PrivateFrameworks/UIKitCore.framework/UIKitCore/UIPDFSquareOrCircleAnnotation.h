@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {
    double _W;
    unsigned short _S;
    struct CGPDFArray { } *_D;
    double _SE;
    double _I;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
- (void)strokePath:(struct CGContext { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
