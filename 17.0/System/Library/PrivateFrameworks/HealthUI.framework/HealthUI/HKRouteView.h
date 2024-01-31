@class NSString, MKMapView, HKLocationReadings, UIButton;

@interface HKRouteView : UIView <MKMapViewDelegate> {
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
}

@property (retain, nonatomic) UIButton *toggleMapTypeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)_addAnnotation:(id)a0 isStartPoint:(BOOL)a1;
- (void)_clearMapViewIfNeeded;
- (void)_displayMapRouteForLocationReadings;
- (void)_setRouteMapType:(unsigned long long)a0;
- (void)_toggleMapType;
- (id)routeImageForSharing;
- (void)setLocationReadings:(id)a0;

@end
