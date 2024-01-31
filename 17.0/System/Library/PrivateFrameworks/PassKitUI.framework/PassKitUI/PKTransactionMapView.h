@class PKMerchant, NSString, MKMapView, _MKLocationShifter, CLLocation, PKPaymentTransaction;

@interface PKTransactionMapView : UIView <MKMapViewDelegate> {
    MKMapView *_internalMapView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLaidBounds;
    _MKLocationShifter *_locationShifter;
    CLLocation *_preferredLocation;
    CLLocation *_startStationLocation;
    CLLocation *_endStationLocation;
}

@property (nonatomic) BOOL showsMerchantName;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) BOOL usesDarkAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_locationShifter;
- (void)_updateLocations;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (id)_annotationsForTransaction:(id)a0;
- (void)_centerMapAnimated:(BOOL)a0;
- (void)_createAnnotationsForTransaction:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_mapRectForTransaction:(id)a0;
- (void)_shiftLocationIfNeeded:(id)a0 completion:(id /* block */)a1;

@end
