@interface AWDWiFiSoftAP : PBCodable <NSCopying> {
    struct { unsigned char lowPowerModeDuration : 1; unsigned char misToSoftAPActiveTimeInMilliseconds : 1; unsigned char sessionDuration : 1; unsigned char timestamp : 1; unsigned char appleDeviceConnectCount : 1; unsigned char appleDeviceDisconnectCount : 1; unsigned char bringUpMethod : 1; unsigned char channel : 1; unsigned char otherDeviceConnectCount : 1; unsigned char otherDeviceDisconnectCount : 1; unsigned char reasonCode : 1; unsigned char securityTypes : 1; unsigned char ssidChanged : 1; unsigned char teardownReason : 1; unsigned char familyDevice : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMisToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) BOOL hasBringUpMethod;
@property (nonatomic) unsigned int bringUpMethod;
@property (nonatomic) BOOL hasReasonCode;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) BOOL hasTeardownReason;
@property (nonatomic) unsigned int teardownReason;
@property (nonatomic) BOOL hasSessionDuration;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) BOOL hasAppleDeviceConnectCount;
@property (nonatomic) unsigned int appleDeviceConnectCount;
@property (nonatomic) BOOL hasOtherDeviceConnectCount;
@property (nonatomic) unsigned int otherDeviceConnectCount;
@property (nonatomic) BOOL hasAppleDeviceDisconnectCount;
@property (nonatomic) unsigned int appleDeviceDisconnectCount;
@property (nonatomic) BOOL hasOtherDeviceDisconnectCount;
@property (nonatomic) unsigned int otherDeviceDisconnectCount;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasSsidChanged;
@property (nonatomic) unsigned int ssidChanged;
@property (nonatomic) BOOL hasFamilyDevice;
@property (nonatomic) BOOL familyDevice;
@property (nonatomic) BOOL hasLowPowerModeDuration;
@property (nonatomic) unsigned long long lowPowerModeDuration;
@property (nonatomic) BOOL hasSecurityTypes;
@property (nonatomic) unsigned int securityTypes;

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
