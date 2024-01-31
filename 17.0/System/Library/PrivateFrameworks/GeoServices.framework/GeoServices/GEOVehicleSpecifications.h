@class GEOVehicleInfo, GEOEVInfo, GEOLPRInfo, PBDataReader, PBUnknownFields;

@interface GEOVehicleSpecifications : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOEVInfo *_evInfo;
    GEOLPRInfo *_lprInfo;
    GEOVehicleInfo *_vehicleInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _lprPlateMissingReason;
    struct { unsigned char has_lprPlateMissingReason : 1; unsigned char read_unknownFields : 1; unsigned char read_evInfo : 1; unsigned char read_lprInfo : 1; unsigned char read_vehicleInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLprInfo;
@property (retain, nonatomic) GEOLPRInfo *lprInfo;
@property (readonly, nonatomic) BOOL hasEvInfo;
@property (retain, nonatomic) GEOEVInfo *evInfo;
@property (readonly, nonatomic) BOOL hasVehicleInfo;
@property (retain, nonatomic) GEOVehicleInfo *vehicleInfo;
@property (nonatomic) BOOL hasLprPlateMissingReason;
@property (nonatomic) int lprPlateMissingReason;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsLprPlateMissingReason:(id)a0;
- (id)lprPlateMissingReasonAsString:(int)a0;

@end
