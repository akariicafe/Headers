@class WiFiAnalyticsAWDWiFiNWActivityPowerPStats, WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions, WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation, WiFiAnalyticsAWDWiFiNWActivityBtCoex, WiFiAnalyticsAWDWiFiNWActivityOMI, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityRuUsage, WiFiAnalyticsAWDWiFiNWActivityScanActivity, WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics;

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {
    struct { unsigned char commandsIssued : 1; unsigned char backoffStuck : 1; unsigned char ccCaptureDriverLogs : 1; unsigned char channel : 1; unsigned char channelBandwidth : 1; unsigned char channelsVisited0 : 1; unsigned char channelsVisited1 : 1; unsigned char commanderHalted : 1; unsigned char controllerResets : 1; unsigned char iorSuccess : 1; unsigned char iorWA : 1; } _has;
}

@property (nonatomic) BOOL hasControllerResets;
@property (nonatomic) unsigned int controllerResets;
@property (nonatomic) BOOL hasBackoffStuck;
@property (nonatomic) unsigned int backoffStuck;
@property (readonly, nonatomic) BOOL hasScanActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityScanActivity *scanActivity;
@property (readonly, nonatomic) BOOL hasPowerActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityPowerPStats *powerActivity;
@property (readonly, nonatomic) BOOL hasImpedingFunctions;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *impedingFunctions;
@property (readonly, nonatomic) BOOL hasAggregateMetrics;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *aggregateMetrics;
@property (readonly, nonatomic) BOOL hasBtCoex;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoex *btCoex;
@property (nonatomic) BOOL hasChannelsVisited0;
@property (nonatomic) unsigned int channelsVisited0;
@property (nonatomic) BOOL hasChannelsVisited1;
@property (nonatomic) unsigned int channelsVisited1;
@property (readonly, nonatomic) BOOL hasPhyrate;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *phyrate;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelBandwidth;
@property (nonatomic) unsigned int channelBandwidth;
@property (nonatomic) BOOL hasCcCaptureDriverLogs;
@property (nonatomic) unsigned int ccCaptureDriverLogs;
@property (nonatomic) BOOL hasCommandsIssued;
@property (nonatomic) unsigned long long commandsIssued;
@property (nonatomic) BOOL hasCommanderHalted;
@property (nonatomic) unsigned int commanderHalted;
@property (nonatomic) BOOL hasIorSuccess;
@property (nonatomic) unsigned int iorSuccess;
@property (nonatomic) BOOL hasIorWA;
@property (nonatomic) unsigned int iorWA;
@property (retain, nonatomic) NSMutableArray *txmpduWMEs;
@property (retain, nonatomic) NSMutableArray *rxmpduWMEs;
@property (retain, nonatomic) NSMutableArray *rxmdpuLosts;
@property (readonly, nonatomic) BOOL hasOmi;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityOMI *omi;
@property (readonly, nonatomic) BOOL hasRuUsage;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRuUsage *ruUsage;

+ (Class)rxmdpuLostType;
+ (Class)rxmpduWMEType;
+ (Class)txmpduWMEType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearTxmpduWMEs;
- (unsigned long long)rxmpduWMEsCount;
- (void)clearRxmpduWMEs;
- (unsigned long long)txmpduWMEsCount;
- (void)addRxmdpuLost:(id)a0;
- (void)addRxmpduWME:(id)a0;
- (void)addTxmpduWME:(id)a0;
- (void)clearRxmdpuLosts;
- (id)rxmdpuLostAtIndex:(unsigned long long)a0;
- (unsigned long long)rxmdpuLostsCount;
- (id)rxmpduWMEAtIndex:(unsigned long long)a0;
- (id)txmpduWMEAtIndex:(unsigned long long)a0;

@end
