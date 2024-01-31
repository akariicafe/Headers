@class NSArray, NSMutableDictionary, NSString, NSObject, HMFNetworkBrowser;
@protocol OS_dispatch_queue;

@interface HMFNetworkDiagnosticCollector : HMFObject <HMFNetworkDiagnosticDelegate, HMFNetworkBrowserDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) NSMutableDictionary *devicesMap;
@property (nonatomic) double discoveryTimeout;
@property (nonatomic) double resolveTimeout;
@property (nonatomic) double diagnosticTimeout;
@property (retain, nonatomic) HMFNetworkBrowser *browser;
@property (readonly, nonatomic) NSArray *currentDiagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (id)run;
- (void)stop;
- (id)devices;
- (void).cxx_destruct;
- (id)diagnosticReport;
- (void)browser:(id)a0 didFindNetworkService:(id)a1;
- (void)browser:(id)a0 didLoseNetworkService:(id)a1;
- (void)browser:(id)a0 didStartBrowsingForServiceType:(id)a1;
- (void)browser:(id)a0 didStopBrowsingForServiceType:(id)a1;
- (void)browser:(id)a0 didUpdateNetworkService:(id)a1;
- (void)diagnostic:(id)a0 didCompleteWithError:(id)a1;
- (void)diagnostic:(id)a0 didStartWithDevice:(id)a1;
- (id)discoverDevicesWithTimeout:(double)a0;
- (id)initWithQueue:(id)a0 discoveryTimeout:(double)a1 resolveTimeout:(double)a2 diagnosticTimeout:(double)a3 serviceTypes:(id)a4;
- (id)networkDiagnostics;
- (id)resolveDevicesWithAddressType:(unsigned long long)a0 timeout:(double)a1;
- (id)startDiagnosticsWithTimeout:(double)a0;
- (id)workContext;

@end
