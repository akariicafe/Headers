@class NSURL, NSXPCStoreServer, NSDictionary;

@interface RTPersistenceRemoteStoreServer : NSObject

@property (retain) NSXPCStoreServer *xpcStoreServer;
@property (retain) NSURL *storeURL;
@property (retain) NSURL *modelURL;
@property (retain) NSDictionary *serverOptions;

- (id)init;
- (id)initWithStoreURL:(id)a0 modelURL:(id)a1 options:(id)a2;
- (void)startListening;
- (void).cxx_destruct;

@end
