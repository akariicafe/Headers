@interface MUCGPDFAnnotationAdaptor : NSObject

+ (id)_concreteAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 ofPage:(struct CGPDFPage { } *)a1;
+ (id)_concreteDictionaryRepresentationOfAKAnnotation:(id)a0 forPage:(struct CGPDFPage { } *)a1;
+ (id)newAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 ofPage:(struct CGPDFPage { } *)a1;
+ (id)newPlaceholderAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 ofPage:(struct CGPDFPage { } *)a1;
+ (id)pdfDictionaryRepresentationOfAKAnnotation:(id)a0 forPage:(struct CGPDFPage { } *)a1;
+ (id)supportedAnnotationTypes;

@end
