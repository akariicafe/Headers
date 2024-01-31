@interface DAContactsAccountProvider : NSObject

+ (id)providerWithAddressBook:(void *)a0;
+ (id)providerWithContactStore:(id)a0;

- (id)allAccounts;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;

@end
