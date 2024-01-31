@class NSString, QLPreviewScrollView, UIView, UITapGestureRecognizer;

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate> {
    QLPreviewScrollView *_scrollView;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _isVisible;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (id)init;
- (void)_doubleTapRecognized:(id)a0;
- (void)loadView;
- (id)scrollView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didScroll:(id)a0;
- (void)didZoom:(id)a0;
- (BOOL)canPinchToDismiss;
- (id)parallaxView;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)supportsScrollingUpAndDownUsingKeyCommands;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)_updateScrollViewZoomUpdate:(struct CGSize { double x0; double x1; })a0;
- (void)didEndZoomingAtScale:(double)a0;
- (void)previewScrollView:(id)a0 didEndZoomingAtScale:(double)a1;
- (double)previewScrollView:(id)a0 extraMinimumZoomForMinimumZoomScale:(double)a1 maximumZoomScale:(double)a2;
- (void)previewScrollViewDidScroll:(id)a0;
- (void)previewScrollViewDidZoom:(id)a0;
- (BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)a0;
- (void)previewScrollViewWillBeginZooming:(id)a0;
- (BOOL)shouldLayoutContentBasedOnPeripheryInsets;
- (void)willBeginZooming;

@end
