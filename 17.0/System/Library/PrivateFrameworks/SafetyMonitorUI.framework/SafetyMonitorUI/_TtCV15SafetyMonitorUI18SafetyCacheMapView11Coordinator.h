@interface _TtCV15SafetyMonitorUI18SafetyCacheMapView11Coordinator : NSObject <MKMapViewDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ priorityDistanceBetweenEnrouteAnnotations;
    void /* unknown type, empty encoding */ contactImageRenderingContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;

@end
