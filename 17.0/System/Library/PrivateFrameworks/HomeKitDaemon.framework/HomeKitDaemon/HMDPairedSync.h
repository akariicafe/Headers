@class NSString, PSYSyncCoordinator;

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate>

@property (readonly, nonatomic) PSYSyncCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void).cxx_destruct;
- (void)needToSync;
- (void)syncComplete;
- (void)syncPartiallyComplete;

@end
