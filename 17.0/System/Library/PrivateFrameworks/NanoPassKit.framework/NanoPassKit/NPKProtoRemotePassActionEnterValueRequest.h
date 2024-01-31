@class NSString, NSData;

@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *requestUniqueID;
@property (retain, nonatomic) NSString *balanceIdentifier;
@property (retain, nonatomic) NSString *balanceLabel;
@property (retain, nonatomic) NSString *currentBalanceCurrency;
@property (nonatomic) long long currentBalanceAmount;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData;

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
