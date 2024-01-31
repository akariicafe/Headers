@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearSubscriptions;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)subscriptionsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSubscriptions:(id)a0;

@end
