@class NSSet, NSMutableDictionary;

@interface HUAccessoryHearingSyncManager : NSObject

@property (class, readonly, nonatomic) NSSet *syncableSupportedDevices;
@property (class, readonly, nonatomic) NSSet *adaptiveTransparencySupportedDevices;

@property (retain, nonatomic) NSMutableDictionary *cachedEnabled;
@property (retain, nonatomic) NSMutableDictionary *deviceListeningState;
@property (retain, nonatomic) NSMutableDictionary *deviceType;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesListeningState;

+ (id)sharedInstance;

- (id)init;
- (id)deviceTypes;
- (struct { long long x0; long long x1; })deviceState;
- (void).cxx_destruct;
- (void)_initCachedEnabled;
- (void)_registerForAccessoryHearingSettingsUpdate;
- (void)_registerForAccessoryManagerUpdate;
- (void)_registerForNearbyControllerUpdate;
- (long long)deviceTypeForAddress:(id)a0;
- (id)deviceTypeForProductCode:(id)a0;
- (void)listeningModeDidChange:(id)a0;
- (long long)listeningStateForAddress:(id)a0 andStoredState:(id)a1;
- (void)sendUpdateToAccessory;

@end
