@class NSMutableDictionary, NSHashTable;

@interface SAFenceManager : NSObject <SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDsByUnsafeRegionIdentifier;
@property (retain) NSMutableDictionary *deviceUUIDsBySafeLocation;
@property (retain, nonatomic) NSMutableDictionary *safeLocationsByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *statesByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *regionsByRegionIdentifier;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (id)init;
- (void)removeClient:(id)a0;
- (void)notifyState:(unsigned long long)a0 forUnsafeLocationRegion:(id)a1;
- (void)handleFenceEvent:(unsigned long long)a0 forRegion:(id)a1;
- (unsigned long long)getSafeLocationCount;
- (BOOL)stopMonitorUnsafeLocationExit:(id)a0 forDevice:(id)a1;
- (void)removeLocationsForDeviceUuid:(id)a0;
- (void).cxx_destruct;
- (id)getRegionForSafeLocation:(id)a0;
- (void)notifyState:(unsigned long long)a0 forSafeLocationRegion:(id)a1;
- (BOOL)isSafeLocation:(id)a0;
- (BOOL)startMonitorSafeLocation:(id)a0 forDevice:(id)a1;
- (unsigned long long)getUnsafeLocationCount;
- (BOOL)stopMonitorSafeLocation:(id)a0 forDevice:(id)a1;
- (BOOL)startMonitorUnsafeLocationExit:(id)a0 forDevice:(id)a1;

@end
