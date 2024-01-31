@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void)_pruneOldRecents;
- (id)init;
- (void)dealloc;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)registerXPCHandler;
- (void).cxx_destruct;
- (void)_notificationFired:(id)a0;

@end
