@interface HealthRecordsConceptsSupport.UserDomainConceptChangeProvider : NSObject <HKUserDomainConceptStoreDelegate> {
    void /* unknown type, empty encoding */ udcStore;
    void /* unknown type, empty encoding */ _udcChanges;
}

- (id)init;
- (void).cxx_destruct;
- (void)userDomainConceptStore:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)userDomainConceptStore:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptStore:(id)a0 didUpdateUserDomainConcepts:(id)a1;

@end
