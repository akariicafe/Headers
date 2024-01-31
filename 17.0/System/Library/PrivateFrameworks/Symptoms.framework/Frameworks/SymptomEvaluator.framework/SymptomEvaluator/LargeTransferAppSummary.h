@class NSString, FlowOriginLedger, NSMutableDictionary;

@interface LargeTransferAppSummary : NSObject

@property (retain, nonatomic) FlowOriginLedger *ledger;
@property (retain, nonatomic) NSMutableDictionary *transferFlows;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long numCellRxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellTxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellRxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellTxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long totalCellRxTransferSize;
@property (nonatomic) unsigned long long totalCellTxTransferSize;
@property (nonatomic) unsigned long long numWiFiRxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiTxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiRxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiTxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long totalWiFiRxTransferSize;
@property (nonatomic) unsigned long long totalWiFiTxTransferSize;
@property (nonatomic) double recentCellRxThroughput;
@property (nonatomic) double recentCellTxThroughput;
@property (nonatomic) double recentWiFiRxThroughput;
@property (nonatomic) double recentWiFiTxThroughput;
@property (readonly, nonatomic) double recentTotalThroughput;
@property (readonly, nonatomic) double recentTotalRxThroughput;
@property (readonly, nonatomic) double recentTotalTxThroughput;
@property (readonly, nonatomic) double recentCellThroughput;
@property (readonly, nonatomic) double recentWiFiThroughput;

- (id)description;
- (void).cxx_destruct;

@end
