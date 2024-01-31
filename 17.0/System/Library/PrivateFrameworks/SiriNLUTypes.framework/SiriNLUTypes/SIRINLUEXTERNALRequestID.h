@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALRequestID : PBCodable <NSCopying> {
    struct { unsigned char requester : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasLoggableUserId;
@property (retain, nonatomic) NSString *loggableUserId;
@property (readonly, nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) NSString *trpId;
@property (readonly, nonatomic) BOOL hasConnectionId;
@property (retain, nonatomic) NSString *connectionId;
@property (nonatomic) BOOL hasRequester;
@property (nonatomic) int requester;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRequester:(id)a0;
- (id)requesterAsString:(int)a0;

@end
