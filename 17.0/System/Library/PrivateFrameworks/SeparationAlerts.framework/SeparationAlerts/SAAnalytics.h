@class NSString, NSMutableDictionary, SAAnalyticsSettings, NSDate;

@interface SAAnalytics : NSObject <SAAnalyticsServiceProtocol> {
    SAAnalyticsSettings *_settings;
}

@property (nonatomic) unsigned long long numAlerts;
@property (nonatomic) unsigned long long numAlertsLeftBehind;
@property (nonatomic) unsigned long long numAlertsTraveling;
@property (nonatomic) unsigned long long numEnabled;
@property (retain, nonatomic) NSMutableDictionary *numEnabledPerType;
@property (nonatomic) unsigned long long numSafe;
@property (nonatomic) unsigned long long numSafeInUse;
@property (nonatomic) BOOL isAllUsingSameSafe;
@property (nonatomic) unsigned long long numBTRequests;
@property (nonatomic) unsigned long long numBTLeftBehindRequests;
@property (nonatomic) unsigned long long numBTTravelingRequests;
@property (nonatomic) unsigned long long numGpsRequests;
@property (nonatomic) unsigned long long numWifiRequests;
@property (nonatomic) unsigned long long numTimers;
@property (nonatomic) unsigned long long numDevicesAtSafeExit;
@property (nonatomic) unsigned long long numUnsafe;
@property (nonatomic) unsigned long long numUnsafeWithLOI;
@property (nonatomic) unsigned long long numUnsafeWithoutLOI;
@property (nonatomic) unsigned long long aggActiveDuration;
@property (nonatomic) unsigned long long aggInSafeDuration;
@property (nonatomic) unsigned long long aggInUnsafeDuration;
@property (nonatomic) unsigned long long aggInTravelDuration;
@property (nonatomic) double aggScanDuration;
@property (nonatomic) double aggScanDurationForFindingRelevantItemsOnly;
@property (retain, nonatomic) NSDate *lastActivated;
@property (retain, nonatomic) NSDate *lastSafeEntry;
@property (retain, nonatomic) NSDate *lastUnsafeEntry;
@property (retain, nonatomic) NSDate *lastTravelStart;
@property (readonly, nonatomic) double publishingInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)submitEvent:(id)a0 content:(id)a1;
- (void)addScanDuration:(double)a0;
- (void)addPreArrivalAlertTime:(double)a0 didRejoinPriorExit:(BOOL)a1;
- (void)addAggressiveScanRequest:(BOOL)a0;
- (void)submitAlertRateEvent:(id)a0 alertType:(id)a1;
- (void)addGpsLocationRequest:(BOOL)a0;
- (void)addAlertWithContext:(id)a0;
- (void)addDeviceFetchResultCount:(unsigned long long)a0 type1count:(unsigned long long)a1 type2count:(unsigned long long)a2 type3count:(unsigned long long)a3 type4count:(unsigned long long)a4 type5count:(unsigned long long)a5 type6count:(unsigned long long)a6 type7count:(unsigned long long)a7 type8count:(unsigned long long)a8 safeCount:(unsigned long long)a9 usingSameSafe:(BOOL)a10;
- (void)setInTravelState:(BOOL)a0;
- (void)addWifiLocationRequest:(BOOL)a0;
- (void)addSafeLocationFetchResultCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setInUnsafeLocationState:(BOOL)a0;
- (void)addVisit:(BOOL)a0 withRadius:(unsigned long long)a1;
- (void)addNumDevicesWithYou:(unsigned long long)a0;
- (void)addScanDurationForFindingRelevantItemsOnly:(double)a0;
- (void)publishAndResetAggregation;
- (void)addDidSeparateWhileInVisit:(BOOL)a0 didRejoinPriorExit:(BOOL)a1;
- (id)initWithSettings:(id)a0;
- (void)addWakeTimerRequest;
- (void)resetAggregation;
- (void)setActiveState:(BOOL)a0;
- (void)setInSafeLocationState:(BOOL)a0;
- (void)submitDefaultAlertRateEvent;

@end
