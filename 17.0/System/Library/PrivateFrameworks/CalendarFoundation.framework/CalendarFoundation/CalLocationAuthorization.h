@class NSString, CalLocationAuthorizationStatus, CLLocationManager, NSObject;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logHandle;
+ (id)authorizationForBundleIdentifier:(id)a0 bundle:(id)a1 createIfNecessary:(BOOL)a2;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)_cachedInstanceForBundleID:(id)a0 bundle:(id)a1;
+ (id)_keyForBundleID:(id)a0 bundle:(id)a1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)initializeQueueAndInstancesIfNeeded;
+ (unsigned long long)ttlLocationStatus;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (void)ttlLocationStatusWithCompletion:(id /* block */)a0;
+ (id)locationAuthorizationAsyncCallersQueue;
+ (void)preciseLocationAuthorizedForBundle:(id)a0 completion:(id /* block */)a1;
+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0;
+ (void)authorizationStatusForBundle:(id)a0 completion:(id /* block */)a1;
+ (int)authorizationStatusForBundle:(id)a0;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)a0;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)authorizationStatus;
- (unsigned long long)waitForPrecision;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 bundle:(id)a1 queue:(id)a2;

@end
