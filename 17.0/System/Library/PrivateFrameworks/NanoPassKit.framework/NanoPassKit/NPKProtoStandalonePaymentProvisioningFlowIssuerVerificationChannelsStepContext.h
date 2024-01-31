@class NSMutableArray, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (retain, nonatomic) NSMutableArray *verificationChannels;

+ (Class)verificationChannelsType;

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
- (void)addVerificationChannels:(id)a0;
- (void)clearVerificationChannels;
- (id)verificationChannelsAtIndex:(unsigned long long)a0;
- (unsigned long long)verificationChannelsCount;

@end
