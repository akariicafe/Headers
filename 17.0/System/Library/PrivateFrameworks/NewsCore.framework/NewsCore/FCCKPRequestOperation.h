@class FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPRequestOperationHeader *_header;
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
    FCCKPOperation *_request;
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
