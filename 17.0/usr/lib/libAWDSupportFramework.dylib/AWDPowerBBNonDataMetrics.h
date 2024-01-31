@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char aPWakeCacheFlushCnt : 1; unsigned char idlePowerMicroWatt : 1; unsigned char oOSPowerMicroWatt : 1; unsigned char registrationPowerMicroWatt : 1; unsigned char scanPowerMicroWatt : 1; unsigned char voicePowerMicroWatt : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasScanPowerMicroWatt;
@property (nonatomic) unsigned int scanPowerMicroWatt;
@property (nonatomic) BOOL hasOOSPowerMicroWatt;
@property (nonatomic) unsigned int oOSPowerMicroWatt;
@property (nonatomic) BOOL hasRegistrationPowerMicroWatt;
@property (nonatomic) unsigned int registrationPowerMicroWatt;
@property (nonatomic) BOOL hasIdlePowerMicroWatt;
@property (nonatomic) unsigned int idlePowerMicroWatt;
@property (nonatomic) BOOL hasVoicePowerMicroWatt;
@property (nonatomic) unsigned int voicePowerMicroWatt;
@property (nonatomic) BOOL hasAPWakeCacheFlushCnt;
@property (nonatomic) unsigned int aPWakeCacheFlushCnt;

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
