@class NSDate, NSUUID, CLRegion, NSHashTable, NSString, NSMutableDictionary, NSMutableSet, CLCircularRegion;
@protocol SAFenceManagerRequestProtocol, SATimeServiceProtocol;

@interface SAScenarioClassifier : NSObject <SAScenarioClassifierServiceProtocol, SAFenceManagerClientProtocol, SATravelTypeClassifierClientProtocol>

@property (nonatomic) unsigned long long scenarioClassification;
@property (copy, nonatomic) NSUUID *deviceUuid;
@property (retain, nonatomic) NSHashTable *clients;
@property (copy, nonatomic) CLRegion *currentUnsafeLocation;
@property (copy, nonatomic) CLRegion *lastUnsafeLocation;
@property (retain, nonatomic) NSMutableSet *safeLocations;
@property (retain, nonatomic) NSMutableDictionary *statesBySafeLocation;
@property (copy, nonatomic) CLCircularRegion *currentVisit;
@property (readonly, copy, nonatomic) NSDate *scenarioChangeDate;
@property (retain, nonatomic) id<SAFenceManagerRequestProtocol> delegate;
@property (retain, nonatomic) id<SATimeServiceProtocol> timeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertSAScenarioClassToString:(unsigned long long)a0;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)dealloc;
- (void)removeClient:(id)a0;
- (void)removeGeofence:(id)a0;
- (void)addGeofence:(id)a0;
- (void).cxx_destruct;
- (void)didChangeTravelTypeFrom:(unsigned long long)a0 to:(unsigned long long)a1 hints:(unsigned long long)a2;
- (id)getCurrentTime;
- (void)_addSafeLocation:(id)a0;
- (void)_addUnsafeLocation:(id)a0;
- (id)_findSafeLocationWithUUID:(id)a0;
- (BOOL)_hasAllSafeLocationStatesKnown;
- (BOOL)_isInsideAnySafeLocation;
- (void)_notifyAllClientsOfScenarioChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_removeSafeLocation:(id)a0;
- (void)_removeUnsafeLocation:(id)a0;
- (BOOL)_setNewScenarioClass:(unsigned long long)a0;
- (void)didDetermineState:(unsigned long long)a0 forSafeLocation:(id)a1 forDevice:(id)a2;
- (void)didDetermineState:(unsigned long long)a0 forUnsafeLocation:(id)a1 forDevice:(id)a2;
- (id)initWithDeviceUuid:(id)a0;
- (id)initWithDeviceUuid:(id)a0 scenarioClass:(unsigned long long)a1 unsafeLocation:(id)a2;

@end
