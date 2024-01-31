@class NSObject, HDProfile, NSMutableDictionary;
@protocol HKHRAFibBurdenTachogramClassifier, OS_dispatch_group, OS_dispatch_queue;

@interface HKHRAFibBurdenTachogramClassificationsBuilder : NSObject {
    HDProfile *_profile;
    id<HKHRAFibBurdenTachogramClassifier> _classifier;
    NSMutableDictionary *_julianDayToClassifications;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_saveNewClassification:(id)a0;
- (void)addSampleToClassify:(id)a0 dayIndex:(long long)a1;
- (id)buildClassifications;
- (id)buildClassificationsAndWaitForNewClassificationSaves:(BOOL)a0;
- (id)classificationForSample:(id)a0;
- (id)initWithProfile:(id)a0 classifier:(id)a1;

@end
