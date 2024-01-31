@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {
    struct { unsigned char isNewsAppPurchase : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRestoredPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *restoredPaidSubscriptionChannelId;
@property (nonatomic) BOOL hasIsNewsAppPurchase;
@property (nonatomic) BOOL isNewsAppPurchase;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
