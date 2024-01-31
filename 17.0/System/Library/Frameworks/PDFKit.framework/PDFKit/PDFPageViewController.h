@class NSString, PDFPageViewControllerPrivate;

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate> {
    PDFPageViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScaleFactor:(double)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)pdfView;
- (double)scaleFactor;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)selection;
- (void)viewWillLayoutSubviews;
- (id)textInputView;
- (id)pageView;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setSelection:(id)a0;
- (id)scrollView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_centerAlign;
- (void)setPageBreakMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)autoScaleFactor;
- (void)setAutoScales:(BOOL)a0;
- (void)setPDFView:(id)a0;
- (id)PDFPage;
- (void)removeAKOverlay;
- (void)_buildPDFPageView;
- (void)_removePDFView;
- (void)_setupGestureRecognizerDependencies;
- (void)_updateAnnotations;
- (void)changedBoundsForBoxNotification:(id)a0;
- (void)didRotatePageNotification:(id)a0;
- (void)enforceAutoScaleFactor;
- (void)setBackgroundImage:(id)a0 atBackgroundQuality:(int)a1;
- (void)setMinScaleFactor:(double)a0 withMaxScaleFactor:(double)a1;
- (void)setPDFPage:(id)a0;
- (void)setRenderingProperties:(id)a0;

@end
