@class PBUnknownFields, GEOChargerPlugsInfo;

@interface GEOEVChargingInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    unsigned int _batteryChargeAfterCharging;
    unsigned int _batteryPercentageAfterCharging;
    unsigned int _chargingTime;
    struct { unsigned char has_batteryChargeAfterCharging : 1; unsigned char has_batteryPercentageAfterCharging : 1; unsigned char has_chargingTime : 1; } _flags;
}

@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) BOOL hasBatteryPercentageAfterCharging;
@property (nonatomic) unsigned int batteryPercentageAfterCharging;
@property (nonatomic) BOOL hasBatteryChargeAfterCharging;
@property (nonatomic) unsigned int batteryChargeAfterCharging;
@property (readonly, nonatomic) BOOL hasChargerPlugsInfo;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
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
