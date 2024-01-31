@class ICPBDGSStartDelegationResponse, ICPBDGSFinishDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;
    unsigned int _requestUniqueID;
    ICPBDGSStartDelegationResponse *_startDelegationResponse;
    struct { unsigned char requestUniqueID : 1; } _has;
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
