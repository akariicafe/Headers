@class NSString, NSMutableDictionary, NSMutableArray;

@interface FlowOriginLedger : NSObject

@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) NSMutableDictionary *appExtensions;
@property (retain, nonatomic) NSMutableDictionary *currentFlows;
@property (retain, nonatomic) NSMutableDictionary *currentAssetDownloads;
@property (retain, nonatomic) NSMutableDictionary *activityBitmaps;
@property (retain, nonatomic) NSMutableArray *possibleAVFlows;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long totalObservedCellRxBytes;
@property (nonatomic) unsigned long long totalObservedCellTxBytes;
@property (nonatomic) unsigned long long totalObservedWiFiRxBytes;
@property (nonatomic) unsigned long long totalObservedWiFiTxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesCellRxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesCellTxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesWiFiRxBytes;
@property (nonatomic) unsigned long long totalWithDelegatesWiFiTxBytes;
@property (nonatomic) unsigned long long closedFlows;
@property (nonatomic) unsigned long long prevPollCellRxBytes;
@property (nonatomic) unsigned long long prevPollCellTxBytes;
@property (nonatomic) unsigned long long prevPollWiFiRxBytes;
@property (nonatomic) unsigned long long prevPollWiFiTxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalCellRxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalCellTxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalWiFiRxBytes;
@property (readonly, nonatomic) unsigned long long pollIntervalWiFiTxBytes;
@property (nonatomic) unsigned long long prevPrevPollCellRxBytes;
@property (nonatomic) unsigned long long prevPrevPollCellTxBytes;
@property (nonatomic) unsigned long long prevPrevPollWiFiRxBytes;
@property (nonatomic) unsigned long long prevPrevPollWiFiTxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalCellRxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalCellTxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalWiFiRxBytes;
@property (readonly, nonatomic) unsigned long long prevPollIntervalWiFiTxBytes;
@property (nonatomic) unsigned long long sampleStartCellRxBytes;
@property (nonatomic) unsigned long long sampleStartCellTxBytes;
@property (nonatomic) unsigned long long sampleStartWiFiRxBytes;
@property (nonatomic) unsigned long long sampleStartWiFiTxBytes;
@property (readonly, nonatomic) unsigned long long sampleCellRxBytes;
@property (readonly, nonatomic) unsigned long long sampleCellTxBytes;
@property (readonly, nonatomic) unsigned long long sampleWiFiRxBytes;
@property (readonly, nonatomic) unsigned long long sampleWiFiTxBytes;
@property (readonly, nonatomic) double sampleCellRxThroughput;
@property (readonly, nonatomic) double sampleCellTxThroughput;
@property (readonly, nonatomic) unsigned long long sampleCellRxThroughputBps;
@property (readonly, nonatomic) unsigned long long sampleCellTxThroughputBps;
@property (readonly, nonatomic) double sampleWiFiRxThroughput;
@property (readonly, nonatomic) double sampleWiFiTxThroughput;
@property (nonatomic) BOOL mostRecentFlowSeenAsForeground;
@property (nonatomic) BOOL sampleStartedInForegroundState;
@property (nonatomic) BOOL sampledAsHighTransferSize;
@property (nonatomic) BOOL sampledAsHighInterfaceUse;
@property (nonatomic) BOOL sampledAsCoreMediaAssetDownload;
@property (nonatomic) BOOL sampledCoreMediaAssetDownloadInactive;
@property (nonatomic) unsigned long long sampleAdditionalFlags;
@property (nonatomic) double sampleStartTime;
@property (nonatomic) double sampleTotalBusyTime;
@property (nonatomic) double lastUsed;
@property (readonly, nonatomic) double durationSinceLastUse;

+ (id)getStatsString;

- (id)init;
- (void)dealloc;
- (id)briefDescription;
- (id)description;
- (void).cxx_destruct;
- (void)addActivityBitmapForSnapshot:(id)a0 interface:(unsigned char)a1;
- (void)startSamplingPeriod;

@end
