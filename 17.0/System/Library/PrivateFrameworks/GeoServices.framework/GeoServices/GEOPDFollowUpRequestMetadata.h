@class PBUnknownFields;

@interface GEOPDFollowUpRequestMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _dataType;
    int _requestType;
    struct { unsigned char has_dataType : 1; unsigned char has_requestType : 1; } _flags;
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
