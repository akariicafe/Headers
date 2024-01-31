@class NSString, HDProfile, HDAssertion;

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _batchSize;
    BOOL _hasScheduledProcessing;
    double _scheduledProcessingTimestamp;
    HDAssertion *_databaseAssertion;
}

@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)ontologyShardImporter:(id)a0 didImportEntry:(id)a1;
- (id)init;
- (void)unitTesting_overrideDefaultBatchSize:(long long)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (void)ontologyDatabase:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)unitTesting_scheduleUserDomainConceptProcessing;

@end
