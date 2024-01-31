@class NSNumber, EDAMUser, NSString;

@interface EDAMNoncancelableSubscription : FATObject

@property (retain, nonatomic) NSNumber *subscriptionId;
@property (retain, nonatomic) EDAMUser *user;
@property (retain, nonatomic) NSNumber *premiumServiceStatus;
@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSString *itunesReceiptData;
@property (retain, nonatomic) NSString *amazonUserId;
@property (retain, nonatomic) NSString *amazonPurchaseToken;
@property (retain, nonatomic) NSString *premiumServiceSku;
@property (retain, nonatomic) NSNumber *nextPaymentDue;
@property (retain, nonatomic) NSNumber *premiumLockUntil;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSString *itunesOriginalTransactionId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
