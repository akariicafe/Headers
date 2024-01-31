@class NSString, NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFlowIdentifier;
@property (retain, nonatomic) NSString *flowIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;
@property (readonly, nonatomic) BOOL hasCreditAccountCredential;
@property (retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential;

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
