@class NSUserDefaults, ATXAnchorModelHyperParameters, NSDate, _PASLock;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelPredictionForwarderProtocol;

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
    unsigned long long _maxPredictions;
}

- (id)now;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)predictions;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)init;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (id)serializePredictions:(id)a0;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (void)initializeLock;
- (void)scheduleExistingPredictions;
- (id)readPredictionsFromUserDefaults;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void)scheduleNextPredictionUpdate;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (void)clearPredictionsForAnchor:(id)a0;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (id)deserializePredictionsDataOrInitializeDictionary:(id)a0;
- (id)deduplicatedPredictions:(id)a0;
- (void).cxx_destruct;
- (id)criteriaForJobOnDate:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (void)forwardPredictionUpdates;
- (void)writePredictionsToUserDefaults:(id)a0;
- (id)predictionsValidNow;

@end
