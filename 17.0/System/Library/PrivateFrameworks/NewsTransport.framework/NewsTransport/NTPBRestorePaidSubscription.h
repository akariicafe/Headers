@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addItems:(id)a0;
- (void)clearItems;
- (unsigned long long)itemsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)itemsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;

@end
