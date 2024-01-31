@class FCCKPResponseOperationResult, FCCKPRecordRetrieveResponse, FCCKPQueryRetrieveResponse, FCCKPOperation;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    struct { unsigned char operationCost : 1; } _has;
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
