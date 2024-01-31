@class ASCPendingPromises, ASCLazy, ASCTaskCoordinator;
@protocol ASCServices;

@interface ASCLockupFetcher : NSObject

@property (class, readonly) ASCLockupFetcher *sharedFetcher;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCPendingPromises *pendingRequests;
@property (readonly, nonatomic) ASCTaskCoordinator *requestCoordinator;
@property (readonly, nonatomic) ASCLazy *bundleCoordinator;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)collectionWithRequest:(id)a0;
- (void)daemonConnectionWasLost:(id)a0;
- (void)daemonDidRebootstrap:(id)a0;
- (id)loadedLockupWithRequest:(id)a0;
- (id)lockupForBundleID:(id)a0 withContext:(id)a1;
- (id)lockupWithRequest:(id)a0;
- (void)submitBatchRequest:(id)a0;

@end
