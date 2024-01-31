@class NSNumber, NSString, NSDate;

@interface ASDMutableIAPInfo : ASDIAPInfo

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) NSNumber *appAdamId;
@property (nonatomic) BOOL autoRenewStatus;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) unsigned char type;
@property (nonatomic) BOOL hasUsedFreeOffer;
@property (nonatomic) BOOL hasUsedIntroPricingOffer;
@property (retain, nonatomic) NSString *subscriptionFamilyId;
@property (retain, nonatomic) NSNumber *expirationTimestamp;
@property (retain, nonatomic) NSNumber *lastModifiedTimestamp;
@property (retain, nonatomic) NSNumber *purchaseTimestamp;

- (void)setExpirationTimestamp:(id)a0;
- (void)setLastModifiedTimestamp:(id)a0;
- (void)setPurchaseTimestamp:(id)a0;

@end
