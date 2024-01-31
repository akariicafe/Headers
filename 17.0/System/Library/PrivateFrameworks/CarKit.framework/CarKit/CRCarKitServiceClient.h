@class NSXPCConnection;

@interface CRCarKitServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)serviceQueue;

- (id)init;
- (void)dealloc;
- (void)_setupConnection;
- (void).cxx_destruct;
- (void)_serviceQueuePerformBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performSynchronousServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
