@class NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsReaderModeEntry : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProduct;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product;
@property (nonatomic) BOOL hasAllowsReaderModeEntry;
@property (nonatomic) BOOL allowsReaderModeEntry;

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
