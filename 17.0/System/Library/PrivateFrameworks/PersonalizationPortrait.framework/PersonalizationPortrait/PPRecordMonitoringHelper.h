@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PPRecordMonitoringHelper : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
    BOOL _hasRegistered;
}

- (id)_handleRecentChangesWithDelegates:(id)a0 changeGenerator:(id /* block */)a1 recordGenerator:(id /* block */)a2;
- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)a0;
- (void)unloadDelegate:(id)a0;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)a0 recordGenerator:(id /* block */)a1;
- (void)handleChangeNotificationWithName:(id)a0 afterDelaySeconds:(double)a1 handler:(id /* block */)a2;
- (id)_setupRecentChangesWithDelegates:(id)a0 recordGenerator:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (void)resetWithDelegate:(id)a0 recentChangesInProgress:(BOOL)a1 recordGenerator:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)a0 recordGenerator:(id /* block */)a1 notificationRegistrationBlock:(id /* block */)a2;
- (void)loadRecordsWithDelegate:(id)a0 recordGenerator:(id /* block */)a1;

@end
