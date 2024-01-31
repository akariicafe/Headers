@class NSString, NSXPCConnection, CLLocationManager, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clQueue;
@property (copy, nonatomic) id /* block */ locationUpdateBlock;
@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (nonatomic) int didChangeNotificationToken;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSDictionary *lastKnownLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocationManager;

- (id)_dictionaryRepresentation;
- (long long)authorizationStatus;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)requestAuthorization;
- (BOOL)_locationServicesEnabled;
- (id)_cachedDictionary:(BOOL)a0;
- (id)_copyLastKnownLocation;
- (id)_createLocationObjFromLocationDictionary:(id)a0;
- (void)_deleteLastKnownLocation;
- (id)_dictionaryForCLLocation:(id)a0;
- (double)_getDistanceOfLastKnownLocationDictionary:(id)a0 fromLocation:(id)a1;
- (BOOL)_isIgnorableLocationError:(id)a0;
- (BOOL)_isLastKnownLocation:(id)a0 freshForMaxAge:(double)a1 fromNewTimestamp:(double)a2;
- (BOOL)_isLastKnownLocation:(id)a0 significantlyOlderThanNewLocation:(id)a1;
- (BOOL)_isLastKnownLocationFresh:(id)a0;
- (void)_locationAuthorizationStatus:(id /* block */)a0;
- (id)_locationQueryParameters;
- (void)_networkReachbilityDidChange:(id)a0;
- (void)_requestActiveLocationChangeUpdates;
- (void)_requestCLLocationUpdates:(id /* block */)a0;
- (void)_requestRecentCLLocation:(id /* block */)a0;
- (void)_setLastKnownLocation:(id)a0;
- (BOOL)_shouldLastKnownLocation:(id)a0 beUpdatedTo:(id)a1;
- (long long)_statusForCLAuthorizationStatus:(int)a0;
- (void)_updateLocationIfNeeded;
- (void)fetchAuthorizationStatus:(id /* block */)a0;
- (BOOL)isAuthorizationApproved;
- (void)requestAuthorizationWithForcedPrompt:(BOOL)a0;

@end
