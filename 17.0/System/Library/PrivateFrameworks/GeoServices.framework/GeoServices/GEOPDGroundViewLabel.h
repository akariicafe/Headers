@class NSMutableArray, PBUnknownFields;

@interface GEOPDGroundViewLabel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groundViewLabelInfos;
    unsigned long long _groundViewLocationId;
    struct { unsigned char has_groundViewLocationId : 1; } _flags;
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
