@interface DAChangeHistoryClerk : NSObject

+ (id)clerkWithAddressBook:(void *)a0;
+ (id)clerkWithContactStore:(id)a0;

- (id)identifiersOfAllRegisterdClients;
- (void)registerClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (void)unregisterClientWithIdentifier:(id)a0 forContainer:(id)a1;

@end
