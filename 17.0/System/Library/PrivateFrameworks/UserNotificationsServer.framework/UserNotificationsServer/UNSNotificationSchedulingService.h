@class UNSPendingNotificationRepository, NSMutableDictionary, UNSNotificationScheduleRepository, UNSLocationMonitor, NSObject, UNSNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationSchedulingService : NSObject {
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_queue_applicationStateDidRestore;
- (void)timeDidChangeSignificantly;
- (void)setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)applicationStateDidRestore;
- (void)_queue_addPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)a0;
- (void)_queue_timeDidChangeSignificantly;
- (void)_queue_localeDidChange;
- (void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1;
- (void)localeDidChange;
- (void)_queue_didChangeNotificationSettings:(id)a0 forBundleIdentifier:(id)a1;
- (void)addPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeSimilarPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)undeliveredNotificationRecordsForBundleIdentifier:(id)a0;
- (void)_queue_removeClientForBundleIdentifier:(id)a0;
- (void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_removeSimilarPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_addClientForBundleIdentifier:(id)a0;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)initWithNotificationRepository:(id)a0 pendingNotificationRepository:(id)a1 notificationScheduleRepository:(id)a2 locationMonitor:(id)a3;
- (void)_queue_setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)didChangeNotificationSettings:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_clientForBundleIdentifier:(id)a0;

@end
