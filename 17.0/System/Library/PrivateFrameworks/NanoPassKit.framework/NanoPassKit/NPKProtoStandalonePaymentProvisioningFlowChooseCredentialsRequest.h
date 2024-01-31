@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader;
@property (retain, nonatomic) NSMutableArray *chosenPaymentCredentialIdentifiers;

+ (Class)chosenPaymentCredentialIdentifiersType;

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
- (void)addChosenPaymentCredentialIdentifiers:(id)a0;
- (id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)chosenPaymentCredentialIdentifiersCount;
- (void)clearChosenPaymentCredentialIdentifiers;

@end
