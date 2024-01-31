@class NPKProtoStandaloneError;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying> {
    struct { unsigned char cardAdded : 1; } _has;
}

@property (nonatomic) BOOL hasCardAdded;
@property (nonatomic) BOOL cardAdded;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NPKProtoStandaloneError *error;

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
