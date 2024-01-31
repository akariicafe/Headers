@class VKImageAnalyzer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PDFPageAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_analyzerCallbackQueue;
    VKImageAnalyzer *_imageAnalyzer;
    NSObject<OS_dispatch_semaphore> *_workloadSemaphore;
    NSMutableSet *_requestedPages;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _requestedPagesMutex;
    double _imageScale;
    BOOL _drawQuads;
}

@property (class, readonly, nonatomic) PDFPageAnalyzer *sharedInstance;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFormElementsUsingDetectorToPage:(id)a0 displayBox:(long long)a1;
- (void)_callCompletionBlock:(id /* block */)a0 onQueue:(id)a1 analysis:(id)a2 error:(id)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_computeEdgeInsetsForQuad:(id)a0 inImage:(struct CGImage { } *)a1 background:(unsigned char)a2 glyphCount:(unsigned long long)a3;
- (void)_addFormElementsFromAnalysis:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPage:(id)a2;
- (void)_addTextFromAnalysis:(id)a0 ofImage:(id)a1 toPDFPage:(id)a2;
- (id)_createFreeTextAnnotationWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 font:(id)a1 textContentType:(id)a2 page:(id)a3;
- (id)_detectedAnnotationWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 intersectsAnnotationOnPage:(id)a1;
- (void)_drawTextFromAnalysis:(id)a0 ofImage:(id)a1 intoContext:(struct CGContext { } *)a2 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGPoint { double x0; double x1; })_testPixelsFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 compare:(id /* block */)a2;
- (void)analyzePage:(id)a0 analysisTypes:(unsigned long long)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;

@end
