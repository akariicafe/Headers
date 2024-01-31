@class NSObject;
@protocol OS_dispatch_queue;

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)syncCoordinator:(id)a0 didAddRemoteEventsWithStreamNameCounts:(id)a1 events:(id)a2;
- (void)syncCoordinator:(id)a0 didApplyRemoteAdditionChangeSet:(id)a1;
- (void)syncCoordinator:(id)a0 didApplyRemoteDeletionChangeSet:(id)a1;
- (void)syncCoordinator:(id)a0 didCreateAdditionChangeSet:(id)a1;
- (void)syncCoordinator:(id)a0 didCreateDeletionChangeSet:(id)a1;
- (void)syncCoordinator:(id)a0 didDeleteRemoteEventsWithCount:(unsigned long long)a1;
- (void)syncCoordinator:(id)a0 didInsertLocalAdditionEventsWithStreamNameCounts:(id)a1;
- (void)syncCoordinator:(id)a0 didInsertLocalDeletionEventsWithCount:(unsigned long long)a1;

@end
