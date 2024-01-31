@class NSString, FCCKPRecordIdentifier, FCCKPRecord;

@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString *_etag;
    FCCKPRecordIdentifier *_identifier;
    FCCKPRecord *_record;
    int _type;
    struct { unsigned char type : 1; } _has;
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
