@interface AWDPowerBatteryMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cycleCountKey : 1; unsigned char durationDispOn : 1; unsigned char durationPartialDispOff : 1; unsigned char durationPartialDispOn : 1; unsigned char energyChargedMicroWatt : 1; unsigned char energyConsumedDisplayOffMicroWatt : 1; unsigned char energyConsumedDisplayOnMicroWatt : 1; unsigned char energyConsumedPartailDispOnMicrowatt : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEnergyConsumedDisplayOnMicroWatt;
@property (nonatomic) unsigned int energyConsumedDisplayOnMicroWatt;
@property (nonatomic) BOOL hasEnergyConsumedDisplayOffMicroWatt;
@property (nonatomic) unsigned int energyConsumedDisplayOffMicroWatt;
@property (nonatomic) BOOL hasEnergyChargedMicroWatt;
@property (nonatomic) unsigned int energyChargedMicroWatt;
@property (nonatomic) BOOL hasCycleCountKey;
@property (nonatomic) unsigned int cycleCountKey;
@property (nonatomic) BOOL hasEnergyConsumedPartailDispOnMicrowatt;
@property (nonatomic) unsigned int energyConsumedPartailDispOnMicrowatt;
@property (nonatomic) BOOL hasDurationDispOn;
@property (nonatomic) unsigned int durationDispOn;
@property (nonatomic) BOOL hasDurationPartialDispOn;
@property (nonatomic) unsigned int durationPartialDispOn;
@property (nonatomic) BOOL hasDurationPartialDispOff;
@property (nonatomic) unsigned int durationPartialDispOff;

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
