@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
    BOOL _needsRecalc;
}

@property (weak, nonatomic) UIPrintPageRenderer *printPageRenderer;
@property (nonatomic) BOOL imagePDFAnnotations;
@property (nonatomic) double maximumContentHeight;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } perPageContentInsets;
@property (nonatomic) long long startPage;
@property (readonly, nonatomic) long long pageCount;
@property (readonly, nonatomic) BOOL requiresMainThread;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setNeedsRecalc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageContentRect:(BOOL)a0;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)removeFromPrintPageRenderer;
- (void)_recalcIfNecessary;

@end
