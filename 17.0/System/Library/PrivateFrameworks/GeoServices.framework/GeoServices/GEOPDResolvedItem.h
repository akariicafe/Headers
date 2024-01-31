@class NSString, PBUnknownFields;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_extractedTerm;
    int _resolvedItemType;
    unsigned int _resultIndex;
    struct { unsigned char has_resolvedItemType : 1; unsigned char has_resultIndex : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
