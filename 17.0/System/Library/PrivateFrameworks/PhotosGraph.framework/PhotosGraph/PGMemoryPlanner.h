@class MARelation, NSArray, NSSet, NSMutableDictionary, NSDate, PGMemoryElectorConfiguration, NSObject;
@protocol OS_os_log;

@interface PGMemoryPlanner : NSObject {
    NSArray *_pastMemories;
    NSArray *_memoriesToAvoid;
    NSArray *_futureMemoriesGroupedByTrigger;
    NSObject<OS_os_log> *_loggingConnection;
    NSDate *_currentUniversalMemoryDate;
    NSSet *_similarCategorySets;
    NSMutableDictionary *_timeDecayScoreByPastMemoryCreationDate;
    NSMutableDictionary *_maximumTimeDecayScoreByPastMemoryIdentifier;
    MARelation *_secondaryFeatureOfFeature;
    NSSet *_similarFeatureSets;
}

@property (readonly, nonatomic) PGMemoryElectorConfiguration *configuration;

+ (BOOL)_isFallbackMemory:(id)a0;
+ (double)_momentCommonalityScoreComparingMomentNodes:(id)a0 toMomentNodes:(id)a1;
+ (BOOL)canElectEndOfYearTriggeredMemory:(id)a0 withAlreadyElectedMemories:(id)a1;
+ (BOOL)canElectTriggeredMemory:(id)a0 withAlreadyElectedMemories:(id)a1;
+ (id)groupFutureMemoriesPerTrigger:(id)a0;

- (void).cxx_destruct;
- (double)_commonalityScoreComparingMemory:(id)a0 toMemory:(id)a1 momentWeight:(double)a2 featureWeight:(double)a3 memoryCategoryWeight:(double)a4;
- (void)_computeIfNeededTimeDecayScoreForPastMemories;
- (id)_overallDateIntervalForTriggeredMemories:(id)a0;
- (double)avoidScoreForMemory:(id)a0;
- (double)categorySimilarityScoreBetweenMemory:(id)a0 andMemory:(id)a1;
- (double)collisionScoreForMemory:(id)a0;
- (double)commonalityScoreComparingMemory:(id)a0 toAlreadyElectedMemory:(id)a1;
- (double)commonalityScoreComparingMemory:(id)a0 toMemory:(id)a1;
- (id)creationDateOfLastMemory;
- (double)featureCommonalityScoreComparingFeatureNodes:(id)a0 toFeatureNodes:(id)a1;
- (id)filterMemories:(id)a0 forTriggerCollisionsWithTriggerHandler:(id)a1 graph:(id)a2 progressReporter:(id)a3;
- (id)initWithPastSource:(id)a0 futureSource:(id)a1 configuration:(id)a2 graph:(id)a3 loggingConnection:(id)a4 progressReporter:(id)a5;
- (id)maximumTimeDecayScoreByPastMemoryIdentifier;
- (unsigned long long)numberOfDaysSinceMemoryUpgrade;
- (id)similarCategorySets;
- (id)similarFeatureSets;
- (id)timeDecayScoreByPastMemoryCreationDate;
- (double)timeDecayScoreForTriggeredMemory:(id)a0 numberOfDaysToLook:(unsigned long long)a1;
- (BOOL)tooSoonToElectMemory:(id)a0;

@end
