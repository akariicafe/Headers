@class NSArray, PDFAnnotation;

@interface PDFBorderPrivateVars : NSObject {
    PDFAnnotation *annotation;
    long long style;
    double hCornerRadius;
    double vCornerRadius;
    double lineWidth;
    long long dashCount;
    NSArray *dashPattern;
    double *dashPatternRaw;
}

- (void).cxx_destruct;

@end
