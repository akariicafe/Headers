@class NSArray, NSSet, NWPathEvaluator, WFInterface, WFDiagnosticsManager, CWFScanResult, NSObject;
@protocol OS_dispatch_queue;

@interface WFHealthManager : NSObject

@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (retain, nonatomic) CWFScanResult *network;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsQueue;
@property (retain, nonatomic) WFDiagnosticsManager *diagnosticsManager;
@property (nonatomic) BOOL failNoInternetDiagnosticsTests;
@property (nonatomic) long long completedVelocityTestTimes;
@property (nonatomic) BOOL shouldFileNewMetrics;
@property (retain, nonatomic) NSArray *failedTestsIDs;
@property (readonly, nonatomic) BOOL currentNetworkHasNoInternetConnection;
@property (nonatomic) BOOL isChinaDevice;

- (void)linkQualityDidChange:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)_updateCurrentNetworkIssues;
- (void)currentNetworkDidChange:(id)a0;
- (void)forceUpdateNetworkIssues;
- (void)runNoInternetDiagnostics;
- (void)runNoInternetDiagnosticsAfter:(long long)a0;

@end
