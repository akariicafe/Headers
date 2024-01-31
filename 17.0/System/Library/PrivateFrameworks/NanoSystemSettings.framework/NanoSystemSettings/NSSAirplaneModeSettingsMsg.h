@interface NSSAirplaneModeSettingsMsg : PBCodable <NSCopying> {
    struct { unsigned char cellularOn : 1; } _has;
}

@property (nonatomic) BOOL hasCellularOn;
@property (nonatomic) BOOL cellularOn;
@property (nonatomic) BOOL wifiOn;
@property (nonatomic) BOOL bluetoothOn;

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
