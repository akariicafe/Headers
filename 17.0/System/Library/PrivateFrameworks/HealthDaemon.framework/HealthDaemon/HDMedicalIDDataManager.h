@class NSString, HDProfile;

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (BOOL)updateMedicalIDWithSyncedData:(id)a0 provenance:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (id)fetchMedicalIDWithError:(id *)a0;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (BOOL)deleteMedicalIDDataWithError:(id *)a0;
- (long long)medicalIDSetupStatusWithError:(id *)a0;
- (void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id *)a0;
- (BOOL)unitTest_persistMedicalIDData:(id)a0;
- (id)medicalIDEmergencyContactsWithError:(id *)a0;
- (id)fetchMedicalIDIfSetUpWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)obliterateMedicalIDDataWithReason:(id)a0 error:(id *)a1;
- (BOOL)updateMedicalIDWithLocalData:(id)a0 error:(id *)a1;
- (id)unitTest_medicalIDData;
- (id)medicalIDClinicalContactsWithError:(id *)a0;

@end
