@class NSDateInterval, NSDate;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {
    NSDate *_lastDateUpdate;
    NSDateInterval *_todayInterval;
}

@property (readonly, nonatomic) NSDate *lastDateUpdate;
@property (readonly, nonatomic) NSDate *todayStart;
@property (readonly, nonatomic) NSDate *todayEnd;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;
+ (BOOL)_supportsHistoricProviders;
+ (BOOL)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (void)_addedProvider:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (void)_prepareForUpdate;
- (void)_scheduleUpdateForDate:(id)a0;
- (void)_scheduleUpdatesForDateProvider:(id)a0;
- (id)_valueForHistoricProvider:(id)a0 feature:(id)a1;

@end
