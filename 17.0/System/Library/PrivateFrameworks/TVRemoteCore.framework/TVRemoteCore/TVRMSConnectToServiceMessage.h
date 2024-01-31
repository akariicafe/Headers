@class NSString, TVRMSServiceMessage;

@interface TVRMSConnectToServiceMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) TVRMSServiceMessage *service;
@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;

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

@end
