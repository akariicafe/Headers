@interface VCPProtoFilesystemMovieClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _identifiers;
}

@property (nonatomic) float start;
@property (nonatomic) float duration;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (readonly, nonatomic) unsigned int *identifiers;

+ (id)resultFromLegacyDictionary:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)addIdentifier:(unsigned int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIdentifiers;
- (unsigned int)identifierAtIndex:(unsigned long long)a0;
- (id)exportToLegacyDictionary;
- (void)setIdentifiers:(unsigned int *)a0 count:(unsigned long long)a1;

@end
