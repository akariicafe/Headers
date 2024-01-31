@class AAInheritanceController, AAContactsManager;

@interface AAInheritanceContactsViewModel : NSObject {
    AAInheritanceController *_inheritanceController;
    AAContactsManager *_contactsManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)_fetchInvitationStatuses:(id /* block */)a0;
- (void)_fetchInvitations:(id /* block */)a0;
- (id)_localBenefactors:(id)a0;
- (id)_localBeneficiaries:(id)a0 invitationStatuses:(id)a1;
- (id)_localContact:(id)a0;
- (void)fetchBenefactors:(id /* block */)a0;
- (void)fetchBeneficiaries:(id /* block */)a0;
- (void)fetchSuggestedBeneficiaries:(id /* block */)a0;

@end
