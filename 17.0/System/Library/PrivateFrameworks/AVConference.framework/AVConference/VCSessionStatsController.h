@class AVCStatisticsCollector, VCConnectionManager, NSObject, VCTransportStreamGFT;
@protocol OS_dispatch_source, VCSessionStatsControllerDelegate;

@interface VCSessionStatsController : NSObject {
    id<VCSessionStatsControllerDelegate> _weakDelegate;
    AVCStatisticsCollector *_uplinkStatisticsCollector;
    AVCStatisticsCollector *_downlinkStatisticsCollector;
    struct { double responseTime; unsigned char linkID; unsigned short statsIdentifier; unsigned short remoteTimestamp; unsigned short serverPacketInterval; unsigned short uplinkBandwidthSample; unsigned short totalRemoteMediaPacketSent; unsigned short totalRemoteMediaPacketReceived; } _remoteStats;
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;
    unsigned int _statsRequestCounter;
    VCConnectionManager *_connectionManager;
    VCTransportStreamGFT *_transportStream;
    double _lastTriggerRateControlTime;
    id _reportingAgentWeak;
    unsigned int _uplinkServerStatsByteUsed;
    unsigned int _downlinkServerStatsByteUsed;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_statsReceiveThread;
    unsigned short _streamID;
    unsigned short _statsArrayIndex;
    BOOL _enableStatsReceiveThread;
    unsigned int _previousTotalPacketSent;
    unsigned int _previousTotalPacketReceived;
    unsigned int _uplinkMostRecentSendTimestamp;
    unsigned int _downlinkMostRecentSendTimestamp;
    BOOL _enableStatsReporting;
    double _lastStatsReportTime;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTime;
    double _lastTimeReceiveStatsFailed;
    unsigned int _statsNoResponseCounter;
    unsigned int _statsResponseCounter;
    unsigned int _numStatsDroppedDueToStatsID;
    unsigned int _numStatsDroppedDueToLinkID;
    unsigned int _numStatsDroppedDueToTooLate;
    unsigned int _numStatsProcessed;
    unsigned int _numStatsTriggeredForUplink;
    unsigned int _numStatsTriggeredForDownlink;
    double _averageInterCallbackDuration;
    double _lastPacketReceiveCallbackTime;
    double _totalStatsTransportStreamQueueTime;
    double _maxStatsTransportStreamQueueTime;
    double _lastHealthPrintTime;
}

@property (readonly) id reportingAgent;
@property (nonatomic) double statsReportingInterval;
@property (readonly, nonatomic) BOOL didReceiveServerStatsResponse;

- (void)reset;
- (void)dealloc;
- (void)deregisterPeriodicTask;
- (void)flushRealTimeReportingStats;
- (id)initWithDelegate:(id)a0 connectionManager:(id)a1 uplinkStatsCollector:(id)a2 downlinkStatsCollector:(id)a3 reportingAgent:(struct opaqueRTCReporting { } *)a4 transportSessionID:(unsigned int)a5 streamID:(unsigned short)a6 mediaQueue:(struct tagVCMediaQueue { } *)a7;
- (void)periodicTask:(void *)a0;
- (void)registerPeriodicTask;
- (void)sendLocalStats;
- (void)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsSend;
- (void)startLocalSessionStatsUpdate;
- (void)stopLocalSessionStatsUpdate;
- (unsigned short)translateTimestampFromMicro:(double)a0;

@end
