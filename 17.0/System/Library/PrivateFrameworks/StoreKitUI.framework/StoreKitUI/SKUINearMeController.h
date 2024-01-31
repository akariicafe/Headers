@class SSLookupRequest, NSArray, SKUIClientContext, NSDictionary, NSString, CLLocationManager, NSObject;
@protocol OS_dispatch_source;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {
    NSArray *_items;
    BOOL _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    long long _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)_applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)disable;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_refreshTimeout;
- (void)_disableNearMe;
- (void)_finishLookupWithItems:(id)a0 response:(id)a1 error:(id)a2;
- (void)_lookupItemsForLocation:(id)a0;
- (void)_monitorLocationTimeout;
- (void)_setItems:(id)a0 responseDictionary:(id)a1 error:(id)a2 status:(long long)a3;
- (void)_startMonitoringLocation;
- (void)_startRefreshTimer;
- (void)_stopMonitoringLocation;
- (void)_stopRefreshTimer;
- (void)getItems;
- (BOOL)isNearMeLocationStatusEnabled;
- (void)itemStateCenterRestrictionsChanged:(id)a0;

@end
