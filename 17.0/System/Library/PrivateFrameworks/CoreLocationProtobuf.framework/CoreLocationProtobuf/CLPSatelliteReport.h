@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGps;
@property (retain, nonatomic) CLPSatelliteInfo *gps;
@property (readonly, nonatomic) BOOL hasGlonass;
@property (retain, nonatomic) CLPSatelliteInfo *glonass;
@property (readonly, nonatomic) BOOL hasQzss;
@property (retain, nonatomic) CLPSatelliteInfo *qzss;
@property (readonly, nonatomic) BOOL hasGalileo;
@property (retain, nonatomic) CLPSatelliteInfo *galileo;

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

@end
