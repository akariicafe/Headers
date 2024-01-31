@class NSString, HDHealthMedicationsProfileExtension;

@interface HDMedicationDataDonator : NSObject <HDProfileReadyObserver, HDUserDomainConceptObserver, HDDatabaseProtectedDataObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDHealthMedicationsProfileExtension *_profileExtension;
}

@property (readonly, nonatomic) BOOL donationRequiredOnNextUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (id)initWithProfile:(id)a0;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (BOOL)getDonationRequiredOnNextUnlock;
- (BOOL)_checkBuilderAndCancelIfErrorForBuilder:(id)a0 fullStream:(id)a1;
- (void)_donateActiveConceptsForStream:(id)a0 activeMedications:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_donateIfUDCListChangedForUDCArray:(id)a0 manager:(id)a1;
- (void)_donateWithReason:(id)a0;
- (id)_findPreferredNameForConcept:(id)a0;
- (void)_finishStreamingForStream:(id)a0 completion:(id /* block */)a1;
- (BOOL)_medicationUDCHasChangedForUDCArray:(id)a0;
- (id)_medicationUserDomainConceptsForProfile:(id)a0 error:(id *)a1;
- (void)_performDataDonationForProfile:(id)a0 completion:(id /* block */)a1;
- (BOOL)_registerItemForDonationForConcept:(id)a0 builder:(id)a1 fullStream:(id)a2 error:(id *)a3;
- (BOOL)_registerItemForStream:(id)a0 item:(id)a1 error:(id *)a2;
- (void)didRecieveThirdPartyMigrationNotification;
- (void)setDonationRequiredOnNextUnlock:(BOOL)a0;
- (void)unitTesting_performDataDonationForProfile:(id)a0 completion:(id /* block */)a1;

@end
