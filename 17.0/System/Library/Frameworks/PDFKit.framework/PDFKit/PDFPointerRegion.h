@class PDFPointerRegionPrivate;

@interface PDFPointerRegion : NSObject {
    PDFPointerRegionPrivate *_private;
}

- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)setIdentifier:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1;

@end
