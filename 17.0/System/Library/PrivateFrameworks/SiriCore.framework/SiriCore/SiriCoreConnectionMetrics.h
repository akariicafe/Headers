@class NSString, NSDictionary, NSArray, NSNumber;

@interface SiriCoreConnectionMetrics : NSObject

@property (copy, nonatomic) NSNumber *timeUntilOpen;
@property (copy, nonatomic) NSNumber *timeUntilFirstByteRead;
@property (copy, nonatomic) NSNumber *attemptCount;
@property (copy, nonatomic) NSNumber *metricsCount;
@property (copy, nonatomic) NSNumber *meanPing;
@property (copy, nonatomic) NSNumber *pingCount;
@property (copy, nonatomic) NSNumber *unacknowledgedPingCount;
@property (copy, nonatomic, setter=setTCPInfoMetricsByInterfaceName:) NSDictionary *tcpInfoMetricsByInterfaceName;
@property (copy, nonatomic) NSNumber *subflowCount;
@property (copy, nonatomic) NSNumber *connectedSubflowCount;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName;
@property (copy, nonatomic) NSDictionary *subflowSwitchCounts;
@property (retain, nonatomic) SiriCoreConnectionMetrics *remoteMetrics;
@property (copy, nonatomic) NSString *connectionMethod;
@property (copy, nonatomic) NSString *connectionEdgeID;
@property (copy, nonatomic) NSArray *connectionMethodHistory;
@property (copy, nonatomic) NSString *connectionEdgeType;
@property (copy, nonatomic) NSNumber *connectionFallbackReason;
@property (copy, nonatomic) NSNumber *connectionDelay;
@property (copy, nonatomic) NSNumber *firstTxByteDelay;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSNumber *signalStrengthBars;
@property (copy, nonatomic) NSString *providerStyle;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSDictionary *flowNetworkInterfaceType;
@property (copy, nonatomic) NSString *wifiPhyMode;
@property (copy, nonatomic) NSString *wifiChannelInfo;
@property (copy, nonatomic) NSNumber *rssi;
@property (copy, nonatomic) NSNumber *snr;
@property (copy, nonatomic) NSNumber *cca;
@property (copy, nonatomic) NSNumber *isCaptive;
@property (copy, nonatomic) NSDictionary *symptomsBasedNetworkQuality;
@property (copy, nonatomic) NSNumber *dnsResolutionTime;
@property (copy, nonatomic) NSNumber *connectionStartTimeToDNSResolutionTimeMsec;
@property (copy, nonatomic) NSNumber *connectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec;
@property (copy, nonatomic) NSNumber *tlsHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec;
@property (copy, nonatomic) NSNumber *idsLastMessageDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketDelay;
@property (copy, nonatomic) NSNumber *idsLastSocketOpenError;
@property (copy, nonatomic) NSString *tlsVersion;
@property (copy, nonatomic) NSNumber *simSubscriptions;

- (void).cxx_destruct;
- (id)getConnectionMetricsDescription;
- (void)_setConnectionMetricsFromNSPControlConnection:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setConnectionMetricsTCPInfo:(id)a0;
- (void)setConnectionMetricsForIDS:(double)a0 messageDelay:(double)a1 openErrorCode:(unsigned long long)a2;
- (void)setConnectionMetricsFromConnection:(id)a0 isPop:(BOOL)a1 isMPTCP:(BOOL)a2 attemptedEndpoints:(id)a3 completion:(id /* block */)a4;
- (void)setConnectionMetricsFromNWConnectionForDirect:(id)a0 isMPTCP:(BOOL)a1 attemptedEndpoints:(id)a2 withCompletion:(id /* block */)a3;
- (void)setConnectionMetricsFromNWConnectionForPOP:(id)a0 withCompletion:(id /* block */)a1;
- (void)setConnectionMetricsFromStream:(id)a0 isPop:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)setConnectionMetricsFromStreamForDirect:(id)a0 withCompletion:(id /* block */)a1;
- (void)setConnectionMetricsFromStreamForPOP:(id)a0 withCompletion:(id /* block */)a1;

@end
