@class UIPrintInfo, UIPrintPagesController;

@interface UIPrintSheetController : NSObject {
    long long *_selectionPageMap;
}

@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) UIPrintPagesController *pagesController;

- (void)dealloc;
- (void)recalculateWebKitPageCount;
- (void).cxx_destruct;
- (long long)numberOfSheets:(BOOL)a0;
- (void)clearPagesCache;
- (long long)convertSelectionPageNumToPageNum:(long long)a0;
- (void)generateWebKitThumbnailsWithCompletionBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })getNUpLayout;
- (id)imageForSheetNum:(long long)a0 showingPageView:(BOOL)a1;
- (id)initWithPrintInfo:(id)a0 printPageImageDelegate:(id)a1;
- (long long)numberOfPagesInSelection;
- (long long)pageOffsetForRow:(long long)a0 column:(long long)a1 nUpLayout:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })sizeForSheetNum:(long long)a0 showingPageView:(BOOL)a1;
- (void)updateSelectionPageMap;

@end
