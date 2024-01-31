@class PDFPage, PDFDestinationPrivate;

@interface PDFDestination : NSObject <NSCopying> {
    PDFDestinationPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) double zoom;

- (id)document;
- (void)commonInit;
- (id)init;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1;
- (struct __CFArray { } *)createArrayRef;
- (id)initWithPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)pageIfExists;

@end
