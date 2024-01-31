@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSCarKitUtils : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recacheCarCapabilitiesLock;
}

@property (readonly, nonatomic) NSDictionary *carPlayCapabilitiesDict;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)isCarPlayConnected;
- (void).cxx_destruct;
- (BOOL)_isValidLatencyCorrectionValue:(id)a0;
- (id)_fetchCarCapabilitiesDict;
- (id)_getAndPotentiallyCacheCarPlayCapabilitiesDict;
- (id)_latencyCorrectionSecondsForHeadUnit;
- (void)_recacheCarPlayCapabilitiesWithCompletion:(id /* block */)a0;
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString { } *)a0;
- (id)_userInfoValueForKey:(id)a0;
- (void)fetchCarCapabilitiesInBackgroundWithCompletion:(id /* block */)a0;
- (void)handleCarCapabilitiesUpdatedWithCompletion:(id /* block */)a0;
- (void)handleHeadUnitConnectedWithAsyncCompletion:(id /* block */)a0;
- (void)invalidateCachedCarPlayCapabilities;
- (BOOL)isFlexibleFollowupDisabledForConnectedVehicle;
- (id)potentiallyAddHWLatencyToOption:(id)a0 streamHandle:(unsigned long long)a1 voiceController:(id)a2;

@end
