@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void *addressBook;

- (void)dealloc;
- (id)allAccounts;
- (id)initWithAddressBook:(void *)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)accountWithExternalIdentifier:(id)a0 createIfNecessary:(BOOL)a1;

@end
