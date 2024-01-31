@class NSString, CLLocationManager;
@protocol SALocationManagerProtocol;

@interface SALocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) id<SALocationManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitoringLocation;
- (id)init;
- (void)notifyLocation:(id)a0;
- (void)stopMonitoringLocation;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;

@end
