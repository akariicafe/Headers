@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;
- (void)_configureConnectionAndResume;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_createConnectionIfNeeded;

@end
