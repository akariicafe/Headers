@class NSString, MKMapView;

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate>

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)setUpConstraints;

@end
