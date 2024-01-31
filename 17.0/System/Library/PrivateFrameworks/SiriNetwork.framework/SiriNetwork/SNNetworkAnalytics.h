@class SNNetworkAnalyticsInternal;

@interface SNNetworkAnalytics : NSObject

@property (retain, nonatomic) SNNetworkAnalyticsInternal *underlyingNetworkAnalytics;

+ (id)sharedSNNetworkAnalytics;

- (id)init;
- (void)reset;
- (id)_init;
- (void).cxx_destruct;
- (void)setNetId:(id)a0;
- (BOOL)isConnectionActive;
- (unsigned int)getSequenceNumber;
- (void)increaseSequenceNumber;
- (BOOL)isNetIdAvailable;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)a0;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)a0;
- (void)logPeerConnectionFailed:(id)a0;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (void)logSessionConnectionFailed:(id)a0;
- (void)logSessionConnectionHttpHeaderCreated:(id)a0;
- (void)logSessionConnectionSnapshotCaptured:(id)a0;
- (void)resetNetId;
- (void)resetSequenceNumber;
- (void)setIsConnectionActive:(BOOL)a0;
- (void)setNetIdAvailable:(BOOL)a0;
- (void)setOrchestratorRequestId:(id)a0;
- (id)getNetId;
- (id)getOrchestratorRequestId;

@end
