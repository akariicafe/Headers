@class PKProtobufPaymentMethod, NSString, NSData;

@interface PKProtobufPaymentToken : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;
@property (readonly, nonatomic) BOOL hasInstrumentName;
@property (retain, nonatomic) NSString *instrumentName;
@property (readonly, nonatomic) BOOL hasNetwork;
@property (retain, nonatomic) NSString *network;
@property (readonly, nonatomic) BOOL hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL hasPaymentData;
@property (retain, nonatomic) NSData *paymentData;
@property (readonly, nonatomic) BOOL hasRedeemURL;
@property (retain, nonatomic) NSString *redeemURL;
@property (readonly, nonatomic) BOOL hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;

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
