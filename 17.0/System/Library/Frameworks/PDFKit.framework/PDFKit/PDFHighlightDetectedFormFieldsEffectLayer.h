@class PDFPage, NSMutableArray;

@interface PDFHighlightDetectedFormFieldsEffectLayer : CALayer {
    PDFPage *_page;
    long long _displayBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropBox;
    NSMutableArray *_addedSublayers;
}

- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 backgroundColor:(id)a2 labelText:(id)a3 itemIndex:(unsigned long long)a4;
- (void)setDisplayBox:(long long)a0;
- (void)updateVisibleLayers;

@end
