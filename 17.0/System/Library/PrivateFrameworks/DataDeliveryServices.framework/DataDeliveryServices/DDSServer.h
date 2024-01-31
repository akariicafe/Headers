@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, DDSManaging, DDSAssetProviding;

@interface DDSServer : NSObject <NSXPCListenerDelegate, DDSManagingDelegate>

@property (readonly, nonatomic) id<DDSManaging> manager;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly) id<DDSAssetProviding> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;
+ (id)sharedInstanceWithConfiguration:(id)a0;
+ (id)setUpAssertionStorageDirectory;

- (void)dealloc;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleEndedConnection:(id)a0;
- (id)initWithXPCServiceName:(id)a0 assertionStorageFileURL:(id)a1;
- (void).cxx_destruct;
- (void)setCompatabilityVersion:(long long)a0 forAssetType:(id)a1;

@end
