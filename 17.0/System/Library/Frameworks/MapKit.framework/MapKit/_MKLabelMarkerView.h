@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView

@property (weak, nonatomic) MKMapView *mapView;

+ (BOOL)_followsTerrain;

- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)_registerObserver;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_deregisterObserver;
- (void)_updateAnchorOffset;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)shouldShowCallout;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
