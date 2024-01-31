@class WDClinicalOnboardingManager, UTCDateFormatter, HKHealthStore, HKConceptStore, WDClinicalSampleAccountsLoader, HKClinicalAccountStore, HRHealthRecordsMigrator, WDClinicalSourcesDataProvider, HRWDUserActivityManager, HKSampleTypeUpdateController, HKHealthRecordsStore, HKDateCache, HKUCUMUnitDisplayConverter;

@interface HRProfile : NSObject {
    HKConceptStore *_conceptStore;
    HRHealthRecordsMigrator *_migrator;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKClinicalAccountStore *clinicalAccountStore;
@property (readonly, nonatomic) HKConceptStore *conceptStore;
@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider;
@property (readonly, nonatomic) HKSampleTypeUpdateController *updateController;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) UTCDateFormatter *utcDateFormatter;
@property (readonly, nonatomic) HRWDUserActivityManager *userActivityManager;
@property (weak, nonatomic) WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader;
@property (readonly, nonatomic) WDClinicalOnboardingManager *onboardingManager;

+ (id)userProfileWithProfileIdentifier:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithHealthStore:(id)a0;
- (id)initWithHealthStore:(id)a0 profileIdentifier:(id)a1;

@end
