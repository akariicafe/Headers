@class ATXNotificationsActionPredictionRecord, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXLockscreenTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_recordsTable;
    ATXNotificationsActionPredictionRecord *_current;
}

- (id)init;
- (id)getBundleIds;
- (BOOL)addNotificationRecord:(id)a0 timestamp:(id)a1;
- (void).cxx_destruct;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (BOOL)addNotificationId:(id)a0 withBundle:(id)a1 timestamp:(id)a2;
- (BOOL)isEmpty;

@end
