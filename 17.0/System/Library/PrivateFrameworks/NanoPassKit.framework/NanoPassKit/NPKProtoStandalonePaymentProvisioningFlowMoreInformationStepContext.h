@class NSMutableArray, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *moreInfoItems;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;

+ (Class)moreInfoItemsType;

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
- (void)addMoreInfoItems:(id)a0;
- (void)clearMoreInfoItems;
- (id)moreInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)moreInfoItemsCount;

@end
