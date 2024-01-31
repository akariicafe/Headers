@class CNContactStore, NSObject;
@protocol OS_os_log;

@interface _DAChangeHistoryContactsClerk : DAChangeHistoryClerk

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)identifiersOfAllRegisterdClients;
- (void)registerClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (void)unregisterClientWithIdentifier:(id)a0 forContainer:(id)a1;

@end
