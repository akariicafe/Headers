@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying> {
    int _lateRoamMaxRSSI;
    int _lateRoamMinRSSI;
    struct { unsigned char has_lateRoamMaxRSSI : 1; unsigned char has_lateRoamMinRSSI : 1; } _flags;
}

@property (nonatomic) BOOL hasLateRoamMinRSSI;
@property (nonatomic) int lateRoamMinRSSI;
@property (nonatomic) BOOL hasLateRoamMaxRSSI;
@property (nonatomic) int lateRoamMaxRSSI;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
