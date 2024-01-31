@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_notificationEntryQueue;
}

@property (class, readonly, copy, nonatomic) NSArray *allNotificationEntries;

@property (readonly, copy, nonatomic) NSArray *notificationEntries;

- (id)init;
- (id)_provisionedDataclassesForNewAccount:(id)a0 oldAccount:(id)a1;
- (void)removeAllNotificationEntries;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1 error:(id *)a2;
- (id)initWithNotificationEntries:(id)a0;
- (void)postDidChangeNotificationForType:(int)a0 inStore:(id)a1 newAccount:(id)a2 oldAccount:(id)a3;
- (void)postWillPerformDataclassActionsOnAccount:(id)a0 forDataclasses:(id)a1;
- (BOOL)canRemoveAccount:(id)a0 inStore:(id)a1 error:(id *)a2;
- (void)addNotificationEntry:(id)a0;
- (void).cxx_destruct;
- (id)_pluginsRegisteredForAccount:(id)a0;
- (id)_unsafe_pluginsRegisteredForNewAccount:(id)a0 oldAccount:(id)a1 changeType:(id)a2;
- (id)_pluginsRegisteredForNewAccount:(id)a0 oldAccount:(id)a1 changeType:(int)a2;
- (void)postDidPerformDataclassActionsOnAccount:(id)a0 forDataclasses:(id)a1;
- (BOOL)postWillChangeNotificationForType:(int)a0 inStore:(id)a1 newAccount:(id)a2 oldAccount:(id)a3;

@end
