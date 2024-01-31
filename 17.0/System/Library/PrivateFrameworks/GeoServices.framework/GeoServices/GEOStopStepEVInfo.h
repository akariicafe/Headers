@class PBUnknownFields;

@interface GEOStopStepEVInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _gainedBatteryPercentage;
    unsigned long long _muid;
    double _remainingBatteryPercentage;
    unsigned int _chargingTime;
    unsigned int _gainedBatteryCharge;
    unsigned int _gainedTravelRange;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_gainedBatteryPercentage : 1; unsigned char has_muid : 1; unsigned char has_remainingBatteryPercentage : 1; unsigned char has_chargingTime : 1; unsigned char has_gainedBatteryCharge : 1; unsigned char has_gainedTravelRange : 1; unsigned char has_zilchPathIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) BOOL hasGainedBatteryPercentage;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) BOOL hasGainedTravelRange;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasGainedBatteryCharge;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) double remainingBatteryPercentage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
