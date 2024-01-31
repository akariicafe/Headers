@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)allAccounts;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;

@end
