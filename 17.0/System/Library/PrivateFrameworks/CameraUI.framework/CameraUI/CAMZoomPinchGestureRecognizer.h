@interface CAMZoomPinchGestureRecognizer : UIPinchGestureRecognizer

@property (nonatomic, setter=_setZoomPinchInitialDistance:) double _zoomPinchInitialDistance;
@property (readonly, nonatomic) double zoomScale;

- (double)_exponentialZoomScale;
- (void)setState:(long long)a0;
- (double)_hybridZoomScale;
- (double)_zoomPinchDistance;
- (double)_distanceBetweenInitialTwoTouches;

@end
