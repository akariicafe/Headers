@class NSString, PKProtobufCustomPrecisionAmount;

@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) BOOL hasExternalIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) BOOL hasMerchantDomain;
@property (retain, nonatomic) NSString *merchantDomain;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;

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
