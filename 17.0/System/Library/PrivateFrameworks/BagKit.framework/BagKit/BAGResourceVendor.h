@class IDSXPCDaemonController, NSMutableDictionary, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BAGResourceVendor : NSObject <BAGXPCProtocolClient>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) NSMutableDictionary *updateBlocksByOptions;
@property (retain, nonatomic) NSUUID *vendorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_handleInterruption;
- (void).cxx_destruct;
- (void)stopTrackingResourceForOptions:(id)a0;
- (id)initWithQueue:(id)a0 daemonController:(id)a1;
- (void)_calloutToBlocksForOptions:(id)a0 withResource:(id)a1 andContext:(id)a2;
- (void)_performCancelForOptions:(id)a0;
- (void)_performFetchForOptions:(id)a0;
- (void)resourceUpdated:(id)a0 forOptions:(id)a1 withContext:(id)a2;
- (void)trackResourceForOptions:(id)a0 updateBlock:(id /* block */)a1;

@end
