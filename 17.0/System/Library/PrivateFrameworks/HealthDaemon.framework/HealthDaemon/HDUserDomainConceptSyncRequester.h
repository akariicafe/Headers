@class HDUserDomainConceptManager;

@interface HDUserDomainConceptSyncRequester : HDSyncRequester <HDUserDomainConceptObserver>

@property (readonly, weak, nonatomic) HDUserDomainConceptManager *userDomainConceptManager;

- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (id)initWithUserDomainConceptManager:(id)a0;

@end
