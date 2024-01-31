@interface FlowSample : NSObject {
    double _minCellRxThroughput;
    double _maxCellRxThroughput;
    double _minCellTxThroughput;
    double _maxCellTxThroughput;
    double _minWiFiRxThroughput;
    double _maxWiFiRxThroughput;
    double _minWiFiTxThroughput;
    double _maxWiFiTxThroughput;
}

@property (nonatomic) double elapsedTime;
@property (readonly, nonatomic) unsigned long long totalObservedRxBytes;
@property (readonly, nonatomic) unsigned long long totalObservedTxBytes;
@property (nonatomic) unsigned long long totalObservedCellRxBytes;
@property (nonatomic) unsigned long long totalObservedCellTxBytes;
@property (nonatomic) unsigned long long totalObservedWiFiRxBytes;
@property (nonatomic) unsigned long long totalObservedWiFiTxBytes;
@property (readonly, nonatomic) double minCellRxThroughput;
@property (readonly, nonatomic) double averageCellRxThroughput;
@property (readonly, nonatomic) double maxCellRxThroughput;
@property (readonly, nonatomic) double minCellTxThroughput;
@property (readonly, nonatomic) double averageCellTxThroughput;
@property (readonly, nonatomic) double maxCellTxThroughput;
@property (readonly, nonatomic) double ceilingCellRxThroughput;
@property (readonly, nonatomic) double ceilingCellTxThroughput;
@property (readonly, nonatomic) double minWiFiRxThroughput;
@property (readonly, nonatomic) double averageWiFiRxThroughput;
@property (readonly, nonatomic) double maxWiFiRxThroughput;
@property (readonly, nonatomic) double minWiFiTxThroughput;
@property (readonly, nonatomic) double averageWiFiTxThroughput;
@property (readonly, nonatomic) double maxWiFiTxThroughput;
@property (readonly, nonatomic) double ceilingWiFiRxThroughput;
@property (readonly, nonatomic) double ceilingWiFiTxThroughput;
@property (readonly, nonatomic) double minRxThroughput;
@property (readonly, nonatomic) double averageRxThroughput;
@property (readonly, nonatomic) double maxRxThroughput;
@property (readonly, nonatomic) double minTxThroughput;
@property (readonly, nonatomic) double averageTxThroughput;
@property (readonly, nonatomic) double maxTxThroughput;
@property (readonly, nonatomic) double ceilingRxThroughput;
@property (readonly, nonatomic) double ceilingTxThroughput;
@property (readonly, nonatomic) BOOL isIdle;

+ (id)_cellRelay;
+ (void)acquireNominalCeilingValuesForCellDL:(double *)a0 andUL:(double *)a1;

- (id)description;
- (void)accumulateFrom:(id)a0;
- (void)acquireCeilingValuesForCellFlow:(id)a0;

@end
