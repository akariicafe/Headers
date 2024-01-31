@class NSMutableArray, PBUnknownFields;

@interface GEOVersionManifest : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_serviceVersions;
}

@property (retain, nonatomic) NSMutableArray *serviceVersions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)serviceVersionType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)serviceVersionsCount;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addServiceVersion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serviceVersionAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearServiceVersions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
