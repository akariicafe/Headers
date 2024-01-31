@class SUUIViewElement, NSMutableArray, SUUIViewElementLayoutContext;

@interface SUUIProductLockupLayout : NSObject {
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    SUUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_middleLeftViewElements;
    SUUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

@property (readonly, nonatomic) long long bottomLeftLayoutStyle;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_sizeForSegmentedControl:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })_sizeForVerticalViewElements:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })_sizeForViewElement:(id)a0 width:(double)a1;
- (double)bottomPaddingForViewElement:(id)a0;
- (void)enumerateViewElementsForWidth:(double)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasBottomRightElementWithRightAlignment;
- (id)initWithLockup:(id)a0 width:(double)a1 context:(id)a2;
- (struct SUUIProductLockupLayoutSizing { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })layoutWidthsForWidth:(double)a0;
- (double)metadataWidthForWidth:(double)a0;
- (struct SUUIProductLockupLayoutSizing { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; })sizingToFitWidth:(double)a0;
- (double)topPaddingForViewElement:(id)a0;
- (id)viewElementsForSection:(long long)a0;

@end
