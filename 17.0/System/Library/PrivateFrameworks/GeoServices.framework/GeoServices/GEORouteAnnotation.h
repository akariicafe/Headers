@class GEOPBTransitArtwork, GEOMiniCard, PBDataReader, PBUnknownFields;

@interface GEORouteAnnotation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    GEOMiniCard *_infoCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _deprecatedOffsetMeters;
    float _offsetMeters;
    struct { unsigned char has_deprecatedOffsetMeters : 1; unsigned char has_offsetMeters : 1; unsigned char read_unknownFields : 1; unsigned char read_artwork : 1; unsigned char read_infoCard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDeprecatedOffsetMeters;
@property (nonatomic) unsigned int deprecatedOffsetMeters;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) BOOL hasInfoCard;
@property (retain, nonatomic) GEOMiniCard *infoCard;
@property (nonatomic) BOOL hasOffsetMeters;
@property (nonatomic) float offsetMeters;
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

@end
