@class NSArray;

@interface KNPdfHandoutExporter : KNPdfPolyExporter {
    NSArray *_segments;
    NSArray *_segmentsForCurrentPage;
    unsigned long long _pageIndex;
    BOOL _isDrawingNote;
}

@property (nonatomic, getter=isPrintingDivider) BOOL printingDivider;

- (unsigned long long)pageCount;
- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (id)currentInfos;
- (void)drawPolyPageBodyInContext:(struct CGContext { } *)a0 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)incrementPage;
- (void)p_drawDividerLineForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)p_drawNotesForNode:(id)a0 index:(unsigned long long)a1 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 notesIndex:(unsigned long long)a3 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(struct CGContext { } *)a5;
- (void)p_drawRuledLinesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 numberOfLines:(unsigned long long)a2 context:(struct CGContext { } *)a3;
- (id)p_noteSegmentsForSlideNode:(id)a0 withScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 firstSegmentIndex:(unsigned long long)a2;
- (void)p_segmentSlideNodesWithScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_segmentSlidesIfNecessary;
- (id)p_segmentsForPage:(unsigned long long)a0;
- (id)p_segmentsForSlideNode:(id)a0 withScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 firstSegmentIndex:(unsigned long long)a2;

@end
