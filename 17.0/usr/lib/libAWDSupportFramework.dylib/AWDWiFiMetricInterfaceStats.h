@interface AWDWiFiMetricInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char a2dpAssocMinutes : 1; unsigned char cellularDataRxBytes : 1; unsigned char cellularDataTxBytes : 1; unsigned char hidAssocMinutes : 1; unsigned char scoAssocMinutes : 1; unsigned char statsCollectionMinutes : 1; unsigned char wifiA2dpRxBytes : 1; unsigned char wifiA2dpTxBytes : 1; unsigned char wifiAssocMinutes : 1; unsigned char wifiHidRxBytes : 1; unsigned char wifiHidTxBytes : 1; unsigned char wifiRxBytes : 1; unsigned char wifiScoRxBytes : 1; unsigned char wifiScoTxBytes : 1; unsigned char wifiTxBytes : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasWifiA2dpRxBytes;
@property (nonatomic) unsigned int wifiA2dpRxBytes;
@property (nonatomic) BOOL hasWifiScoRxBytes;
@property (nonatomic) unsigned int wifiScoRxBytes;
@property (nonatomic) BOOL hasWifiRxBytes;
@property (nonatomic) unsigned int wifiRxBytes;
@property (nonatomic) BOOL hasWifiHidRxBytes;
@property (nonatomic) unsigned int wifiHidRxBytes;
@property (nonatomic) BOOL hasCellularDataRxBytes;
@property (nonatomic) unsigned int cellularDataRxBytes;
@property (nonatomic) BOOL hasWifiA2dpTxBytes;
@property (nonatomic) unsigned int wifiA2dpTxBytes;
@property (nonatomic) BOOL hasWifiScoTxBytes;
@property (nonatomic) unsigned int wifiScoTxBytes;
@property (nonatomic) BOOL hasWifiTxBytes;
@property (nonatomic) unsigned int wifiTxBytes;
@property (nonatomic) BOOL hasWifiHidTxBytes;
@property (nonatomic) unsigned int wifiHidTxBytes;
@property (nonatomic) BOOL hasCellularDataTxBytes;
@property (nonatomic) unsigned int cellularDataTxBytes;
@property (nonatomic) BOOL hasStatsCollectionMinutes;
@property (nonatomic) unsigned int statsCollectionMinutes;
@property (nonatomic) BOOL hasWifiAssocMinutes;
@property (nonatomic) unsigned int wifiAssocMinutes;
@property (nonatomic) BOOL hasA2dpAssocMinutes;
@property (nonatomic) unsigned int a2dpAssocMinutes;
@property (nonatomic) BOOL hasScoAssocMinutes;
@property (nonatomic) unsigned int scoAssocMinutes;
@property (nonatomic) BOOL hasHidAssocMinutes;
@property (nonatomic) unsigned int hidAssocMinutes;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
