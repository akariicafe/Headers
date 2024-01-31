@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties> {
    BOOL _inMorningRoutine;
    BOOL _inEveningRoutine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isInMorningRoutine;
@property (readonly, nonatomic) BOOL isInEveningRoutine;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (void)_updateRoutines;
- (BOOL)_isInRoutine:(unsigned long long)a0 forDate:(id)a1;
- (void)_prepareForUpdate;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)a0;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)a0;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)a0;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)a0;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)a0;

@end
