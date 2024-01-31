@class RTVisitSCIStayCluster, RTHint, RTHintManager, NSDate, NSObject, RTDefaultsManager, NSMutableArray, NSString, RTDelayedLocationRequester, RTLocation, NSArray, RTDistanceCalculator, RTVisitHyperParameter;
@protocol OS_dispatch_queue;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {
    BOOL _useLowConfidence;
    NSMutableArray *_clusters;
    RTLocation *_lastPointProcessed;
    RTDistanceCalculator *_distanceCalculator;
    NSArray *_hintCache;
    RTLocation *_hintCacheUpdateLocation;
    double _requiredDwellTimeCache;
    NSDate *_requiredDwellTimeCacheDateToUpdate;
}

@property (readonly, nonatomic) unsigned long long fsmState;
@property (readonly, nonatomic) unsigned long long lcFSMState;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDelayedLocationRequester *delayedLocationRequester;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (nonatomic) BOOL latestGeofenceHintChecked;
@property (retain, nonatomic) RTHint *latestGeofenceHint;
@property (nonatomic) BOOL latestSignificantRegionHintChecked;
@property (retain, nonatomic) RTHint *latestSignificantRegionHint;
@property (readonly, nonatomic) RTVisitSCIStayCluster *workingHypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FSMStateToString:(unsigned long long)a0;
+ (BOOL)filterHint:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;
+ (id)FSMEventToString:(unsigned long long)a0;
+ (id)LCFSMStateToString:(unsigned long long)a0;

- (void)shutdown;
- (id)init;
- (double)requiredDwellTimeForLocation:(id)a0;
- (double)requiredTimeOutsideClusterForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (void)populateHintCacheNearLocation:(id)a0 withinDistance:(double)a1;
- (BOOL)isVisitInFlight;
- (id)filterHints:(id)a0 existingHints:(id)a1;
- (void)refreshLatestSignificantRegionHintCache;
- (BOOL)isHint:(id)a0 withinDistance:(double)a1 location:(id)a2;
- (void)_onHintNotification:(id)a0;
- (void)refreshLatestGeofenceHintCache;
- (id)relevantDateForHintSource:(long long)a0 date:(id)a1;
- (BOOL)isHintNearLocation:(id)a0;
- (void)processContextChangeWithSource:(long long)a0;
- (double)minStaticIntervalForSLVArrivalWithHint;
- (void)addVisitFromWorkingHypothesis:(long long)a0 confidence:(double)a1;
- (id)stateMachineConfidenceString;
- (void)onHintNotification:(id)a0;
- (void)exitFromWorkingHypothesis;
- (id)handleFSM:(unsigned long long)a0 point:(id)a1;
- (BOOL)isInWorkingHypothesis;
- (id)getHintWithinDistance:(double)a0 ofLocation:(id)a1 sourceFilter:(id)a2 inverseFilter:(BOOL)a3;
- (id)getHintConsistentWithLocation:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;
- (void)exitUntilNotInWorkingHypotheisWithBlock:(id /* block */)a0;
- (id)getHintsNearLocation:(id)a0 withinDistance:(double)a1 sourceFilter:(id)a2 fromDate:(id)a3 limit:(unsigned long long)a4;
- (void)processPoints:(id)a0;
- (BOOL)isLastRegionHintNearLocation:(id)a0 hintSource:(long long)a1;
- (void).cxx_destruct;
- (id)getLastHintUsingSourceFilter:(id)a0;
- (BOOL)isDwellTimeSatisfiedForLocation:(id)a0;
- (id)hintsNearLocation:(id)a0;
- (BOOL)isHintConsistentWithLocation:(id)a0 hint:(id)a1;
- (void)processContextOnGeofenceEntry;
- (void)resetWorkingHypothesis;
- (id)initWithDefaultsManager:(id)a0 delayedLocationRequester:(id)a1 hintManager:(id)a2 queue:(id)a3 hyperParameter:(id)a4 useLowConfidence:(BOOL)a5;
- (id)latestCachedHintOfSource:(long long)a0;
- (id)retrieveNonLOIHintsNearLocation:(id)a0 withinDistance:(double)a1;
- (void)refreshCachedHintOfSource:(long long)a0;
- (BOOL)isTimeOutsideClusterSatisfiedForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (double)minStaticIntervalForSLVArrival;
- (id)process:(id)a0;
- (BOOL)isValidLatestRegionHintSource:(long long)a0 date:(id)a1;
- (void)addToClusters:(id)a0;

@end
