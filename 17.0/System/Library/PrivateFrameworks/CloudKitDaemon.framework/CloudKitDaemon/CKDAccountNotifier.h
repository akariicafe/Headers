@class NSOperationQueue, NSMapTable;

@interface CKDAccountNotifier : NSObject

@property (nonatomic) int accountChangedToken;
@property (retain, nonatomic) NSMapTable *notificationHandlers;
@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue;
@property (getter=isWarmingUp) BOOL warmingUp;

+ (id)sharedNotifier;

- (id)init;
- (void)dealloc;
- (void)postAccountChangedNotificationWithAccountID:(id)a0 changeType:(long long)a1;
- (void)registerObserver:(id)a0 forAccountChangeNotification:(id /* block */)a1;
- (id)_accountChangeNotificationOperation:(BOOL)a0;
- (void)unregisterObserverForAccountChangeNotification:(id)a0;
- (void)postAccountChangedNotificationToClients;
- (void).cxx_destruct;

@end
