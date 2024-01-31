@class PSYSyncCoordinator, NSString, NSObject;
@protocol OS_dispatch_queue, HMDPairedSyncDelegate;

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate>

@property (readonly, weak) id<HMDPairedSyncDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long currentOperationCount;
@property (readonly, nonatomic) PSYSyncCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void).cxx_destruct;
- (void)_callStartSync;
- (void)needToSync;
- (id)restrictionAsString:(unsigned long long)a0;
- (void)syncComplete;
- (void)syncPartiallyComplete;

@end
