@class PBUnknownFields;

@interface GEOPDSSearchStructureIntentRequestType : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _intentType;
    int _structureType;
    struct { unsigned char has_intentType : 1; unsigned char has_structureType : 1; } _flags;
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
