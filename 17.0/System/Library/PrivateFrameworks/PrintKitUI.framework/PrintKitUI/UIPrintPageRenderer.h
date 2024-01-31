@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject {
    NSMutableArray *_printFormatters;
    struct CGContext { } *_printContext;
    long long _cachedPageCount;
    BOOL _usingPrintJobContext;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paperRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } printableRect;
@property long long requestedRenderingQuality;
@property long long currentRenderingQuality;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (readonly, nonatomic) long long numberOfPages;
@property (copy) NSArray *printFormatters;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)_numberOfPages;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addPrintFormatter:(id)a0 startingAtPageAtIndex:(long long)a1;
- (void)drawFooterForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_endSaveContext;
- (id)printFormatters;
- (void)_drawPage:(long long)a0 withScale:(double)a1 drawingToPDF:(BOOL)a2;
- (void)_endPrintJobContext;
- (long long)_maxFormatterPage;
- (BOOL)_numberOfPagesIsCached;
- (void)_removePrintFormatter:(id)a0;
- (void)_startPrintJobContext:(struct CGContext { } *)a0;
- (BOOL)_startPrintJobContext:(id)a0 printInfo:(id)a1 printSettings:(id)a2;
- (void)_startSaveContext:(struct CGContext { } *)a0;
- (long long)currentRenderingQualityForRequestedRenderingQuality:(long long)a0;
- (void)drawContentForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawHeaderForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawPrintFormatter:(id)a0 forPageAtIndex:(long long)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)printFormattersForPageAtIndex:(long long)a0;
- (void)setPrintFormatters:(id)a0;

@end
