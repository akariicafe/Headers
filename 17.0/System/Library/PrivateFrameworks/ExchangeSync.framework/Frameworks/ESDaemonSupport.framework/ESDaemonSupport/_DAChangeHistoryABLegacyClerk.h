@interface _DAChangeHistoryABLegacyClerk : DAChangeHistoryClerk

@property (readonly, nonatomic) void *addressBook;

- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (id)identifiersOfAllRegisterdClients;
- (void)registerClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (void)unregisterClientWithIdentifier:(id)a0 forContainer:(id)a1;

@end
