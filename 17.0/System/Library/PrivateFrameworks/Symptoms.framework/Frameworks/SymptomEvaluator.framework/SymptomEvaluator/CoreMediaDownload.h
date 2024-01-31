@interface CoreMediaDownload : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double estimatedDuration;
@property (nonatomic) double prevRunBusyTime;
@property (nonatomic) double prevRunIdleTime;
@property (nonatomic) double thisRunStartTime;
@property (nonatomic) double quarantineStartTime;
@property (nonatomic) unsigned int downloadState;
@property (nonatomic) unsigned long long prevRunsCellRxBytes;
@property (nonatomic) unsigned long long prevRunsCellTxBytes;
@property (nonatomic) unsigned long long thisRunStartCellRxBytes;
@property (nonatomic) unsigned long long thisRunStartCellTxBytes;
@property (nonatomic) unsigned long long prevRunsWiFiRxBytes;
@property (nonatomic) unsigned long long prevRunsWiFiTxBytes;
@property (nonatomic) unsigned long long thisRunStartWiFiRxBytes;
@property (nonatomic) unsigned long long thisRunStartWiFiTxBytes;
@property (readonly, nonatomic) unsigned long long prevRunsRxBytes;
@property (readonly, nonatomic) unsigned long long prevRunsTxBytes;
@property (readonly, nonatomic) unsigned long long thisRunStartRxBytes;
@property (readonly, nonatomic) unsigned long long thisRunStartTxBytes;

- (id)description;
- (id)coreMediaDownloadStateToString:(unsigned int)a0;

@end
