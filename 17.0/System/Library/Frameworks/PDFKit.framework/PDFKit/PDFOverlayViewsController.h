@class NSMapTable, PDFView, NSMutableIndexSet, PDFDocument;
@protocol PDFPageOverlayViewProvider;

@interface PDFOverlayViewsController : NSObject {
    NSMapTable *_pageToOverlayMap;
    BOOL _isTornDown;
    NSMutableIndexSet *_observedPageIndices;
}

@property (weak) PDFView *pdfView;
@property (weak) PDFDocument *pdfDocument;
@property (weak) id<PDFPageOverlayViewProvider> viewProvider;

+ (id)instanceForPlatformWithPDFView:(id)a0;

- (void)dealloc;
- (void)teardown;
- (void).cxx_destruct;
- (void)_teardown;
- (id)_cachedOverlayViewForPage:(id)a0;
- (void)_callWillEndDisplayingOverlayViewForPage:(id)a0;
- (id)_callOverlayViewForPage:(id)a0;
- (void)_installOverlayForPageView:(id)a0 ofPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)_pageRotationChanged:(id)a0;
- (void)_setupGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)a0;
- (void)_teardownGestureRecognizersForView:(id)a0 andDocument:(id)a1;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)a0;
- (void)_uninstallAllOverlays;
- (void)_uninstallOverlayForPageView:(id)a0 ofPage:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithPDFView:(id)a0;
- (void)pdfView:(id)a0 didAddView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)pdfView:(id)a0 didSetDocument:(id)a1;
- (void)pdfView:(id)a0 willRemoveView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)pdfView:(id)a0 willSetDocument:(id)a1;

@end
