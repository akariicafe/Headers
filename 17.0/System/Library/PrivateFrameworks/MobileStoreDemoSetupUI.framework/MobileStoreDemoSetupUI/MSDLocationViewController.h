@class NSString, CLLocationManager;

@interface MSDLocationViewController : OBWelcomeController <OBSetupAssistantSupport, CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_locationButtonTapped:(id)a0;

@end
