@class GEOMapsServerMetadata;

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    GEOMapsServerMetadata *_serverMetadata;
}

@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
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
