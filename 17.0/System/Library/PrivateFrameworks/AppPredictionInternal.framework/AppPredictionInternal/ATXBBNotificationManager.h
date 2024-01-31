@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBBNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugOutput;
    NSMutableDictionary *_recentNotifications;
}

+ (id)sharedInstance;

- (id)init;
- (id)recentNotifications;
- (id)initWithDebugOutput:(BOOL)a0;
- (void).cxx_destruct;
- (void)addNotificationForBundleId:(id)a0 withPublicationDate:(id)a1;
- (BOOL)_purgeNotificationsWithMinDate:(id)a0;

@end
