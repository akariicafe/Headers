@class NSNumber, HKHealthStore, NSObject;
@protocol OS_dispatch_queue;

@interface HKPopulationNormsAbstractViewModel : NSObject <HKPopulationNormsViewModelDataSource>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleQueryQueue;
@property (retain, nonatomic) NSNumber *cacheBiologicalSexSegmentIndex;
@property (retain, nonatomic) NSNumber *cacheClassificationIndex;
@property (retain, nonatomic) NSNumber *cacheAgeInYears;
@property (retain, nonatomic) NSNumber *cacheLatestSampleValue;
@property (retain, nonatomic) NSNumber *userHasDataPointAvailable;

- (id)footerText;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)viewTitle;
- (id)ageBucketsTitle;
- (long long)_biologicalSexForSexSegmentIndex:(unsigned long long)a0;
- (unsigned long long)_biologicalSexSegmentIndexForSex:(long long)a0;
- (void)_requireConcreteImplementationOfSelector:(SEL)a0;
- (id)associatedSampleType;
- (id)chartTitle;
- (id)classificationIdentifierForIndex:(unsigned long long)a0;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)a0;
- (id)classificationIndexForSampleValue:(double)a0 age:(long long)a1 sex:(long long)a2;
- (void)clearUserCharacteristicCache;
- (id)currentAgeInYears;
- (long long)currentBiologicalSex;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (unsigned long long)currentClassificationIndex;
- (id)currentDataForBiologicalSex;
- (id)currentLocalizedClassificationDescription;
- (id)currentLocalizedClassificationName;
- (id)currentLocalizedClassificationTitle;
- (id)hk_UIAutomationIdentifier;
- (BOOL)isCurrentClassificationAvailable;
- (id)levelsTitle;
- (id)localizedBiologicalSexTitles;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)a0;
- (id)localizedClassificationNameForIndex:(unsigned long long)a0;
- (id)localizedClassificationTitleForIndex:(unsigned long long)a0;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)minimumSampleValueQuantity;
- (unsigned long long)numberOfBiologicalSexSegments;
- (unsigned long long)numberOfClassifications;
- (void)prepareUserCharacteristicCacheWithHandler:(id /* block */)a0;
- (id)quantityUnitTitle;
- (id)seriesHighlightedColor;
- (id)seriesHighlightedSegmentColor;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)a0;
- (void)setClassificationIndex:(unsigned long long)a0;
- (BOOL)shouldShowClassificationTitle;
- (id)userAgeBucketIndex;
- (id)userLatestSampleValue;

@end
