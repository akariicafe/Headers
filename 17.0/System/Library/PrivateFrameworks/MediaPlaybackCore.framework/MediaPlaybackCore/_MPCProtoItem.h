@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    BOOL _excludeFromShuffle;
    struct { unsigned char mediaType : 1; unsigned char excludeFromShuffle : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
