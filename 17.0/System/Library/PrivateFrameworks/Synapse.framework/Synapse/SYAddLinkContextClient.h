@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)_configureConnectionAndResume;
- (void).cxx_destruct;
- (void)_createConnectionIfNeeded;
- (void)createConnectionWithEndpoint:(id)a0;
- (void)userDidRemoveContentItems:(id)a0;
- (void)userEditDidAddContentItems:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;

@end
