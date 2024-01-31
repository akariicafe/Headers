@class NSString, NSMutableDictionary;
@protocol PPSMetricMonitorServiceDelegate;

@interface PPSMetricMonitorService : NSObject <PPSMetricMonitorServiceInterface, NSXPCListenerDelegate>

@property (retain) NSMutableDictionary *clients;
@property (weak, nonatomic) id<PPSMetricMonitorServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startXPCListener;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)endWithError:(id)a0;
- (void)finishMonitoringAndSendMetrics;
- (void)updateWithMetrics:(id)a0;
- (BOOL)_canStartMonitoringForClient:(id)a0;
- (void)_handleConnectionEndedWithClient:(id)a0;
- (void)setUpWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessWithName:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessWithPID:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringSystemMetricsWithCompletion:(id /* block */)a0;

@end
