@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView

@property (readonly, nonatomic) MKPolyline *polyline;

- (void)createPath;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithPolyline:(id)a0;

@end
