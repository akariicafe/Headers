@class PXGSingleViewLayout, MKMapView, NSString;
@protocol PXMapOptionsViewDelegate;

@interface PXPhotosMapContainerViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>

@property (readonly, nonatomic) MKMapView *mapView;
@property (readonly, weak, nonatomic) id<PXMapOptionsViewDelegate> mapOptionsViewDelegate;
@property (readonly, nonatomic) BOOL enableUserTrackingButton;
@property (readonly, nonatomic) unsigned long long perspectiveButtonState;
@property (readonly, nonatomic) unsigned long long mapStyle;
@property (weak, nonatomic) PXGSingleViewLayout *weakLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMapView:(id)a0 mapOptionsViewDelegate:(id)a1 enableUserTrackingButton:(BOOL)a2 perspectiveButtonState:(unsigned long long)a3 mapStyle:(unsigned long long)a4;

@end
