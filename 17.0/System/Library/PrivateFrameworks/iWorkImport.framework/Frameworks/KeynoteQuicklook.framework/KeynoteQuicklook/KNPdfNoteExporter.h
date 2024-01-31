@class NSString, KNSlideLayoutPrintHelper;

@interface KNPdfNoteExporter : KNPdfExporter <KNSlideLayoutPrintHelperDataSource> {
    BOOL _isDrawingNote;
    KNSlideLayoutPrintHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)pageCount;
- (void).cxx_destruct;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (id)currentInfos;
- (BOOL)drawMonoPageExtraContentInContext:(struct CGContext { } *)a0 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)incrementPage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })monoSlideRectFromScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)p_preparePrintHelperIfNeeded;
- (unsigned long long)printHelper:(id)a0 commentsPageCountForSlideNode:(id)a1;
- (id)printHelper:(id)a0 noteSegmentsForSlideNode:(id)a1;
- (id)slideNodesForPrintHelper:(id)a0;
- (BOOL)supportsPrintingComments;

@end
