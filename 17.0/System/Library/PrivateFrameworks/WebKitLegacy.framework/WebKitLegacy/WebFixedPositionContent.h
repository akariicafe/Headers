@interface WebFixedPositionContent : NSObject {
    void *_private;
}

- (id)initWithWebView:(id)a0;
- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (BOOL)hasFixedOrStickyPositionLayers;
- (void)overflowScrollPositionForLayer:(id)a0 changedTo:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewportConstrainedLayers:(void *)a0 stickyContainerMap:(const void *)a1;

@end
