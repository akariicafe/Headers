@class NSMapTable, HDDaemon, HKObserverSet;
@protocol HDMedicationCountObserver;

@interface HDMedicationCountProvider : NSObject <HDProfileReadyObserver, HDUserDomainConceptObserver, HDMedicationCountProvider> {
    HKObserverSet<HDMedicationCountObserver> *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_ontologyBackedMedicationCountByProfile;
    NSMapTable *_isProfileReadyByProfile;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (void)profileDidBecomeReady:(id)a0;
- (id)initWithDaemon:(id)a0;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (id)init;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)removeMedicationCountObserver:(id)a0;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)addMedicationCountObserver:(id)a0 queue:(id)a1;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (long long)ontologyBackedMedicationCountInProfile:(id)a0;
- (void)monitorMedicationCountsInProfile:(id)a0;

@end
