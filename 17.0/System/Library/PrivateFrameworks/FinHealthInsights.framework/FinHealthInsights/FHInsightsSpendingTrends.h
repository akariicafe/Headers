@class NSObject, FHDatabaseEntity;
@protocol OS_dispatch_queue;

@interface FHInsightsSpendingTrends : NSObject

@property (copy, nonatomic) FHDatabaseEntity *transactionEntity;
@property (copy, nonatomic) FHDatabaseEntity *insightsDestinationEntity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *insightsProcessingQueue;

+ (id)_defaultQueue;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_orderedTimeStampAndAmountPair:(id)a0;
- (void)_computeAndStoreAnomaly:(id)a0 indexedAmountSums:(id)a1 scoresIndexedByMerchantCategory:(id)a2 merchantCategory:(long long)a3 trendWindow:(long long)a4 leftOfCurve:(BOOL)a5;
- (void)_computeAndStoreTrend:(id)a0 indexedAmountSums:(id)a1 merchantCategory:(long long)a2 intervalLengthFromLastInstance:(unsigned long long)a3 trendWindow:(long long)a4;
- (id)_computeKendallCoefficient:(unsigned long long)a0 indexedAmountSums:(id)a1;
- (void)_computeTrendsForAllMerchantCategories:(id)a0 weeklyNegativeScores:(id)a1 monthlyPositiveScores:(id)a2 monthlyNegativeScores:(id)a3 merchantCategory:(long long)a4 useCategoryBoundsForTimeSeries:(BOOL)a5;
- (void)computeAllAnomaliesAndTrends:(id)a0 weeklyNegativeScores:(id)a1 monthlyPositiveScores:(id)a2 monthlyNegativeScores:(id)a3 useCategoryBoundsForTimeSeries:(BOOL)a4 withCompletion:(id /* block */)a5;

@end
