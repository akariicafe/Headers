@class NSPersistentHistoryToken, NSPersistentStore, ICSelectorDelayer, NSDate, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface ICManagedObjectContextUpdater : NSObject

@property (weak, nonatomic) NSPersistentStore *store;
@property (weak, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken;
@property (retain, nonatomic) NSDate *previousHistoryDate;
@property (nonatomic, getter=isListening) BOOL listening;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long numberOfCoalescedNotifications;
@property (retain, nonatomic) ICSelectorDelayer *delayer;

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)a0 ignoringContextName:(id)a1 fromTransactionAuthor:(id)a2 latestToken:(id *)a3 latestTimestamp:(id *)a4;

- (id)init;
- (void)dealloc;
- (BOOL)mergeWithDictionary:(id)a0;
- (id)persistentStoreCoordinator;
- (id)initWithStore:(id)a0 context:(id)a1;
- (void)stopListeningForRemoteContextDidChangeNotifications;
- (void)fetchChangeHistory;
- (void)requestUpdate;
- (void)startListeningForRemoteContextDidChangeNotifications;
- (void).cxx_destruct;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;

@end
