@class NSString, NSXPCConnection, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface ASCServicesConnection : NSObject <ASCServices>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) ASCServicesConnection *sharedConnection;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSXPCConnection *connectionIfValid;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connectionWasInvalidated;
- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (id)lockupFetcherService;
- (id)metricsService;
- (id)offerStateServiceWithDelegate:(id)a0;
- (id)serviceWithBlock:(id /* block */)a0;
- (id)testConnection;

@end
