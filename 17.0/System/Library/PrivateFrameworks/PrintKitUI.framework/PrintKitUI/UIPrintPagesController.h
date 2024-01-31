@class NSThread, UIPrintInfo, NSOperationQueue, NSURL, NSCache;
@protocol UIPrintPagesControllerDelegate;

@interface UIPrintPagesController : NSObject

@property (retain) UIPrintInfo *printInfo;
@property (retain) NSCache *cachedPageSizes;
@property (retain) NSCache *cachedBasePageImages;
@property BOOL usingWebKitFormatter;
@property (retain) NSOperationQueue *webKitPrintingOperationsQueue;
@property (retain) NSThread *webKitThumbnailGenerationThread;
@property (retain) NSURL *webKitThumbnailPDFURL;
@property struct CGPDFDocument { } *webKitThumbnailPDFDocumentRef;
@property (weak, nonatomic) id<UIPrintPagesControllerDelegate> delegate;

- (void)dealloc;
- (void)recalculateWebKitPageCount;
- (void).cxx_destruct;
- (void)clearPagesCache;
- (struct CGSize { double x0; double x1; })sizeForPageNum:(long long)a0;
- (id)baseImageForPageNum:(long long)a0;
- (void)createPDFForAllPages;
- (void)drawBorderAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (void)generateWebKitThumbnailsWithCompletionBlock:(id /* block */)a0;
- (id)imageForPageNum:(long long)a0 showingPageView:(BOOL)a1;
- (id)initWithPrintInfo:(id)a0 delegate:(id)a1;
- (void)removeWebKitThumbnailPDF;

@end
