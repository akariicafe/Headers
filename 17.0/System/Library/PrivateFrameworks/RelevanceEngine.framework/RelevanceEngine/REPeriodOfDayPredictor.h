@class NSArray, NSDateInterval, REDuetKnowledgeStore, NSLock, REUpNextTimer;

@interface REPeriodOfDayPredictor : REPredictor <REPeriodOfDayPredictorProperties> {
    NSArray *_storedPeriods;
    NSLock *_storedPeriodsLock;
    REUpNextTimer *_periodOfDayUpdateTimer;
    REDuetKnowledgeStore *_knowledgeStore;
}

@property (readonly, nonatomic) unsigned long long currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;
@property (readonly, nonatomic) NSArray *storedPeriods;

+ (double)updateInterval;

- (void)dealloc;
- (id)_init;
- (void)update;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (id)_defaultDayPeriodsOfDayForDate:(id)a0;
- (id)_periodsOfDayForSleepIntervals:(id)a0;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)a0;
- (void)_getAllSleepIntervalsWithCompletion:(id /* block */)a0;
- (void)_getHistoricSleepIntervalsWithCompletion:(id /* block */)a0;
- (void)_getPredictedSleepIntervalsWithCompletion:(id /* block */)a0;
- (id)_nextDayPeriodUpdateDate;
- (void)_queue_updateNextDateUpdateTimer;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)a0 afterDate:(id)a1;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)a0;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)a0 beforeDate:(id)a1;

@end
