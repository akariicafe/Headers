@class _PXCompletionHandlerManager, NSString, CLPlacemark, PXLocationStream, CLLocation;

@interface PXContextualMemoriesLocationSetting : NSObject <_PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) CLPlacemark *placemark;
@property (nonatomic) unsigned long long locationState;
@property (retain, nonatomic) PXLocationStream *locationStream;
@property (retain, nonatomic) _PXCompletionHandlerManager *completionHandlerManager;
@property (nonatomic) BOOL monitorsCurrentLocation;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })_simulatedLocationCoordinate;
+ (BOOL)automaticallyNotifiesObserversOfCoordinate;
+ (id)keyPathsForValuesAffectingPlacemark;

- (id)init;
- (void).cxx_destruct;
- (void)resetToDefault;
- (void)_setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_handleLocationAcquisitionUpdate:(id)a0;
- (void)_initiateLocationAcquisitionWithAccuracy:(double)a0;
- (id)_locationForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_updatePlacemarkWithPlacemarks:(id)a0 error:(id)a1;
- (void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)a0;
- (void)requestLocationUpdateWithAccuracy:(double)a0 completionHandler:(id /* block */)a1;

@end
