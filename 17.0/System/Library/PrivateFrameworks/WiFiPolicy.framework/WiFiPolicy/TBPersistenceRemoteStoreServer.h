@class NSURL, NSXPCStoreServer, NSDictionary;

@interface TBPersistenceRemoteStoreServer : NSObject

@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *serverOptions;

- (id)initWithStoreURL:(id)a0 modelURL:(id)a1 options:(id)a2;
- (void)startListening;
- (void).cxx_destruct;

@end
