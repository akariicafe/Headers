@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;

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
- (void)addPaymentApplicationAIDs:(id)a0;
- (void)clearPaymentApplicationAIDs;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentApplicationAIDsCount;

@end
