@class NSString, HDProfile, HDStatisticsCollectionCalculatorDefaultDataSource, NSDate, HKRollingBaselineConfiguration;

@interface HDStatisticsCollectionCalculatorRelativeDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {
    HDStatisticsCollectionCalculatorDefaultDataSource *_defaultDataSource;
    NSDate *_currentDate;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HKRollingBaselineConfiguration *configuration;
@property (copy, nonatomic) id /* block */ shouldContinueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)restrictedSourceEntities;
- (void).cxx_destruct;
- (void)setRestrictedSourceEntities:(id)a0;
- (id)maxRowID;
- (double)_queryPrefetchWindowForQuantityTypeIdentifier:(id)a0;
- (BOOL)_shouldContinueWithError:(id *)a0;
- (BOOL)collectionCalculator:(id)a0 queryForInterval:(id)a1 error:(id *)a2 sampleHandler:(id /* block */)a3 mergeHandler:(id /* block */)a4;
- (id)initForProfile:(id)a0 quantityType:(id)a1 predicate:(id)a2 restrictedSourceEntities:(id)a3 configuration:(id)a4 currentDate:(id)a5;

@end
