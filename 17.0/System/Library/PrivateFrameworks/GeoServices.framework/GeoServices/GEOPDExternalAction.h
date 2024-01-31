@class NSMutableArray, PBUnknownFields;

@interface GEOPDExternalAction : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalActionDetails;
    int _componentType;
    struct { unsigned char has_componentType : 1; } _flags;
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
