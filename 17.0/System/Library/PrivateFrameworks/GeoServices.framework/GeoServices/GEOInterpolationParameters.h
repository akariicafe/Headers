@class PBUnknownFields;

@interface GEOInterpolationParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _fractionalDistance;
    unsigned int _sideOfLine;
    struct { unsigned char has_fractionalDistance : 1; unsigned char has_sideOfLine : 1; } _flags;
}

@property (nonatomic) BOOL hasFractionalDistance;
@property (nonatomic) double fractionalDistance;
@property (nonatomic) BOOL hasSideOfLine;
@property (nonatomic) unsigned int sideOfLine;
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
