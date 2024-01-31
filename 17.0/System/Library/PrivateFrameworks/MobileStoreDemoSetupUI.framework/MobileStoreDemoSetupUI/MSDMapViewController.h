@class NSString, MKMapView, CLLocation, UIButton;
@protocol MSDMapViewControllerDelegate;

@interface MSDMapViewController : UIViewController <MKMapViewDelegate>

@property (retain, nonatomic) id<MSDMapViewControllerDelegate> delegate;
@property (retain, nonatomic) UIButton *recenterButton;
@property (retain, nonatomic) CLLocation *userLocation;
@property (retain, nonatomic) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)stopUpdatingUserLocation;
- (void)annotateStores:(id)a0;
- (id)_getAnnotationWithStoreInfo:(id)a0;
- (void)_recenter:(id)a0;
- (void)_recenterToCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_removeAllStoreAnnotations;
- (void)_zoomToAnnotation;
- (void)_zoomToCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withRadius:(double)a1 allowZoomOut:(BOOL)a2;
- (void)deselectAnnotation;
- (void)zoomToStore:(id)a0;

@end
