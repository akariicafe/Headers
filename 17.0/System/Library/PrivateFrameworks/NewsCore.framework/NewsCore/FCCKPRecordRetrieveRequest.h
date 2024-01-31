@class NSString, FCCKPRecordIdentifier, FCCKPRequestedFields;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString *_clientVersionETag;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPRequestedFields *_requestedFields;
    NSString *_versionETag;
}

+ (id)options;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
