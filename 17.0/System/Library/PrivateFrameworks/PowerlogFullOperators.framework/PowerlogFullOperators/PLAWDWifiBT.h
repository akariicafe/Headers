@class PLEntryNotificationOperatorComposition;

@interface PLAWDWifiBT : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *wifiEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btPowerCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *btRailCallback;
@property BOOL isWiFiStart;
@property BOOL isWiFiRailStart;
@property BOOL isBTStart;
@property BOOL isBTRailStart;
@property long long wifiSubmitCnt;
@property long long btSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdWifi;
+ (id)entryAggregateDefinitionAwdBT;
+ (id)getSharedObjWithOperator:(id)a0;

- (void).cxx_destruct;
- (void)addEntryToBTTable:(id)a0 withValue:(double)a1;
- (void)addEntryToWiFiTable:(id)a0 withValue:(double)a1 andBand:(id)a2;
- (void)handleBTCallback:(id)a0;
- (void)handleBTPowerCallback:(id)a0;
- (void)handleBTRailCallback:(id)a0;
- (void)handleWifiCallback:(id)a0;
- (void)handleWifiRailCallback:(id)a0;
- (void)resetBTTable;
- (void)resetWifiTable;
- (void)startBtMetricCollection;
- (void)startMetricCollection:(id)a0;
- (void)startWifiMetricCollection;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitBtDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (BOOL)submitWiFiDataToAWDServer:(id)a0 withAwdConn:(id)a1;

@end
