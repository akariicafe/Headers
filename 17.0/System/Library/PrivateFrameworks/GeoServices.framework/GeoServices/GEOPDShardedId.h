@class GEOLatLng, PBUnknownFields;

@interface GEOPDShardedId : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _basemapId;
    GEOLatLng *_center;
    unsigned long long _muid;
    int _mapsResultType;
    int _resultProviderId;
    struct { unsigned char has_basemapId : 1; unsigned char has_muid : 1; unsigned char has_mapsResultType : 1; unsigned char has_resultProviderId : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) BOOL hasBasemapId;
@property (nonatomic) unsigned long long basemapId;
@property (nonatomic) BOOL hasMapsResultType;
@property (nonatomic) int mapsResultType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)mapsResultTypeAsString:(int)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsMapsResultType:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
