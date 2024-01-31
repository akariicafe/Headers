@class PBUnknownFields;

@interface GEOPDAvailabilityInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _availableNum;
    int _status;
    unsigned int _totalNum;
    struct { unsigned char has_availableNum : 1; unsigned char has_status : 1; unsigned char has_totalNum : 1; } _flags;
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
