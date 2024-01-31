@class WebFrame, UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
    UIWebPaginationInfo *_paginationInfo;
}

@property (retain, nonatomic) WebFrame *frameToPrint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_webDocumentView;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)removeFromPrintPageRenderer;
- (void)_resetPaginationInfo;

@end
