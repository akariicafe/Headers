@class NSObject, NSString, NSDictionary, NSMutableSet, PSYSyncSessionObserver, PSYSyncSession;
@protocol OS_dispatch_queue, PSYProgressObserverDelegate;

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate> {
    PSYSyncSessionObserver *_syncSessionObserver;
    PSYSyncSession *_currentSyncSession;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_completedInitialSyncPairingIDs;
}

@property (weak, nonatomic) id<PSYProgressObserverDelegate> delegate;
@property (readonly, nonatomic) long long progressObserverState;
@property (readonly, nonatomic) NSString *activityLabel;
@property (readonly, nonatomic) double activityProgress;
@property (readonly, nonatomic) double totalProgress;
@property (readonly, copy, nonatomic) NSDictionary *activityErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)_updateState;
- (void).cxx_destruct;
- (void)supportsMigrationSync;
- (BOOL)_shouldHandleSyncSession:(id)a0;
- (void)syncSessionObserver:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)syncSessionObserver:(id)a0 didReceiveUpdate:(id)a1;
- (void)syncSessionObserver:(id)a0 receivedSyncSession:(id)a1;

@end
