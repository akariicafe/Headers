@interface AWDPowerWifiMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char wifi2P4GHzRxDuration : 1; unsigned char wifi2P4GHzTxDuration : 1; unsigned char wifi5GHz20MHzRxDuration : 1; unsigned char wifi5GHz20MHzTxDuration : 1; unsigned char wifi5GHz40MHzRxDuration : 1; unsigned char wifi5GHz40MHzTxDuration : 1; unsigned char wifi5GHz80MHzRxDuration : 1; unsigned char wifi5GHz80MHzTxDuration : 1; unsigned char wifiFRTSDuration : 1; unsigned char wifiHsicActiveDuration : 1; unsigned char wifiPcieL0Duration : 1; unsigned char wifiPcieL10Duration : 1; unsigned char wifiPcieL11Duration : 1; unsigned char wifiPcieL12Duration : 1; unsigned char wifiScanDuration : 1; unsigned char wifiSleepDuration : 1; unsigned char wifiTotalDuration : 1; unsigned char wifiTotalPowerMicroWatt : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasWifi2P4GHzTxDuration;
@property (nonatomic) unsigned int wifi2P4GHzTxDuration;
@property (nonatomic) BOOL hasWifi2P4GHzRxDuration;
@property (nonatomic) unsigned int wifi2P4GHzRxDuration;
@property (nonatomic) BOOL hasWifi5GHz20MHzTxDuration;
@property (nonatomic) unsigned int wifi5GHz20MHzTxDuration;
@property (nonatomic) BOOL hasWifi5GHz40MHzTxDuration;
@property (nonatomic) unsigned int wifi5GHz40MHzTxDuration;
@property (nonatomic) BOOL hasWifi5GHz80MHzTxDuration;
@property (nonatomic) unsigned int wifi5GHz80MHzTxDuration;
@property (nonatomic) BOOL hasWifi5GHz20MHzRxDuration;
@property (nonatomic) unsigned int wifi5GHz20MHzRxDuration;
@property (nonatomic) BOOL hasWifi5GHz40MHzRxDuration;
@property (nonatomic) unsigned int wifi5GHz40MHzRxDuration;
@property (nonatomic) BOOL hasWifi5GHz80MHzRxDuration;
@property (nonatomic) unsigned int wifi5GHz80MHzRxDuration;
@property (nonatomic) BOOL hasWifiSleepDuration;
@property (nonatomic) unsigned int wifiSleepDuration;
@property (nonatomic) BOOL hasWifiTotalDuration;
@property (nonatomic) unsigned int wifiTotalDuration;
@property (nonatomic) BOOL hasWifiFRTSDuration;
@property (nonatomic) unsigned int wifiFRTSDuration;
@property (nonatomic) BOOL hasWifiScanDuration;
@property (nonatomic) unsigned int wifiScanDuration;
@property (nonatomic) BOOL hasWifiPcieL0Duration;
@property (nonatomic) unsigned int wifiPcieL0Duration;
@property (nonatomic) BOOL hasWifiPcieL10Duration;
@property (nonatomic) unsigned int wifiPcieL10Duration;
@property (nonatomic) BOOL hasWifiPcieL11Duration;
@property (nonatomic) unsigned int wifiPcieL11Duration;
@property (nonatomic) BOOL hasWifiPcieL12Duration;
@property (nonatomic) unsigned int wifiPcieL12Duration;
@property (nonatomic) BOOL hasWifiTotalPowerMicroWatt;
@property (nonatomic) unsigned int wifiTotalPowerMicroWatt;
@property (nonatomic) BOOL hasWifiHsicActiveDuration;
@property (nonatomic) unsigned int wifiHsicActiveDuration;

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
