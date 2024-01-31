@class NPTPerformanceTest, NSString, WFMeasureResult, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WFMeasure : NSObject

@property (nonatomic) BOOL isInProgress;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *gatewayAddress;
@property (retain, nonatomic) NSMutableSet *dnsServers;
@property (retain, nonatomic) NSString *publicDNSAddress;
@property (retain, nonatomic) NSString *testDNSHostname;
@property (retain, nonatomic) NSString *testReason;
@property (nonatomic) BOOL isPeriodicTest;
@property (nonatomic) BOOL isParis;
@property (retain, nonatomic) NPTPerformanceTest *performanceTest;
@property (retain, nonatomic) WFMeasureResult *result;

- (void)abort;
- (id)initWithType:(unsigned long long)a0 andReason:(id)a1 andInterfaceName:(id)a2;
- (BOOL)start:(id /* block */)a0 withCompletionQueue:(id)a1;
- (void)doThroughputTest;
- (id)description;
- (void)retrieveNetworkConfigurations;
- (void).cxx_destruct;
- (void)dispatchThroughputTest;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (BOOL)doPing:(id)a0 count:(long long)a1 timeout:(long long)a2 size:(long long)a3 class:(long long)a4 minRTT:(long long *)a5 maxRTT:(long long *)a6 successCount:(long long *)a7;
- (void)dispatchDNSTest:(id)a0;
- (BOOL)doDNSResolution:(id)a0 timeout:(long long)a1;
- (void)dispatchPingTest:(unsigned long long)a0;

@end
