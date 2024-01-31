@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;
@property (retain) NSObject<OS_dispatch_queue> *fetchQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (void)writeRenderAndEngagementInfo;
- (void)testCountsUptoYear;
- (id)init;
- (void)testCountsForRegularEngagement;
- (void)testCountsAfterCoupleYears;
- (void)testCountsAfterYear;
- (void)testCountsUptoMonth;
- (void)resetResultWithRankingItems:(id)a0;
- (void)testCountsUptoWeek;
- (id)fetchResults;
- (void)_indexItemWithIdentifier:(id)a0 bundleID:(id)a1 startDate:(id)a2 pc:(id)a3;
- (void)testCountsUptoHalfYear;
- (void)testForDummyEntry;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)a0 date:(id)a1 protectionClassMapping:(id)a2;
- (void)testCountsUptoQuarter;
- (void)stressTestCounts;
- (void)fetchBundleRenderAndEngagementInfo;
- (void).cxx_destruct;
- (void)testCountsUptoOneDay;
- (void)_updateSpotlightRecentEngagementWithIdentifier:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 queryString:(id)a3 renderPosition:(id)a4;
- (void)testCountsMovingYearInPast;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)didEngageResultWithRankingItem:(id)a0 startDate:(id)a1 protectionClass:(id)a2 query:(id)a3;
- (void)testForDurationWithIntervals:(int *)a0 maxIndex:(int)a1 duration:(long long)a2 counts:(id)a3;
- (void)testCountsMovingDaysInPast;
- (id)getSyntheticTestRankingItemsForStressTest;
- (id)getSyntheticTestRankingItem;
- (void)fetchBundleRenderAndEngagementInfo:(id)a0;

@end
