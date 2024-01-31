@interface _TtCV15SafetyMonitorUI7MapView11Coordinator : NSObject <MKMapViewDelegate> {
    void /* unknown type, empty encoding */ geocoder;
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void).cxx_destruct;
- (void)mapView:(id)a0 annotationView:(id)a1 didChangeDragState:(unsigned long long)a2 fromOldState:(unsigned long long)a3;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidChangeVisibleRegion:(id)a0;
- (void)longPressActionWithSender:(id)a0;

@end
