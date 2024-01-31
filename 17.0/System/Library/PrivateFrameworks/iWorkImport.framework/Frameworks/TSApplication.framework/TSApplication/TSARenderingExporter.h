@class TSDImager, NSString, TSUProgress, TSAPdfTagger, NSDictionary, TSADocumentRoot, NSObject, TSUProgressContext, TSDBitmapRenderingQualityInfo;
@protocol OS_dispatch_queue, TSARenderingExporterDelegate;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {
    TSADocumentRoot *mDocumentRoot;
    TSDImager *mImager;
    NSObject<OS_dispatch_queue> *mImagerAccessLock;
    BOOL mIsCancelled;
    BOOL mIsQuit;
    BOOL mPaginate;
    BOOL mDoesDrawAllPages;
    NSDictionary *mOptions;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    TSAPdfTagger *mPdfTagger;
}

@property (readonly) NSObject<TSARenderingExporterDelegate> *renderingExporterDelegate;
@property (retain) TSUProgressContext *progressContext;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unscaledClipRect;
@property (readonly, nonatomic) double progressForCurrentPage;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (nonatomic) BOOL paginate;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pdfTaggerClass;

- (void)teardown;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)setup;
- (void)quit;
- (id)documentRoot;
- (BOOL)exportToURL:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)initWithDocumentRoot:(id)a0;
- (BOOL)exportToURL:(id)a0 pageNumber:(unsigned long long)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (id)bitmapRenderingQualityInfo;
- (id)currentInfos;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)a0 imager:(id)a1;
- (id)p_renderingExporterDelegate;
- (void)performBlockWithImager:(id /* block */)a0;
- (BOOL)preparePage:(unsigned long long)a0;
- (BOOL)setInfosToCurrentPage;
- (void)drawCurrentPageWithContext:(struct CGContext { } *)a0 returnSuccess:(BOOL *)a1;
- (Class)imagerClass;
- (BOOL)shouldSuppressBackgroundsForCurrentPage;
- (double)totalProgess;
- (void)drawAllPagesWithContext:(struct CGContext { } *)a0 returnSuccess:(BOOL *)a1;
- (void)finalizeContext:(struct CGContext { } *)a0;
- (id)imager;
- (BOOL)isQuit;
- (void)p_drawCurrentPageWithContext:(struct CGContext { } *)a0 returnSuccess:(BOOL *)a1 createPage:(BOOL)a2;
- (BOOL)p_exportToURL:(id)a0 pageNumber:(unsigned long long)a1 delegate:(id)a2 error:(id *)a3;
- (id)pdfTagger;
- (BOOL)setUpAndDrawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (void)setUpPdfTaggerWithOptions:(id)a0;
- (void)waitForRecalcToFinish;

@end
