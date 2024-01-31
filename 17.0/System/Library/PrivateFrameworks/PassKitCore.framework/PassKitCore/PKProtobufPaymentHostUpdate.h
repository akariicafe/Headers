@class PKProtobufPaymentMethod, NSString, NSData, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;

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
