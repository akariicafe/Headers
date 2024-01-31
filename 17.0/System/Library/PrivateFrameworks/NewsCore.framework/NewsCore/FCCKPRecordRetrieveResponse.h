@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {
    FCCKPRecord *_record;
    BOOL _clientVersionETagMatch;
    struct { unsigned char clientVersionETagMatch : 1; } _has;
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
