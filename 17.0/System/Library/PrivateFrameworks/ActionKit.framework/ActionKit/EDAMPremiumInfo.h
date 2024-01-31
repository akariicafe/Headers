@class NSNumber, NSString;

@interface EDAMPremiumInfo : FATObject

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *premium;
@property (retain, nonatomic) NSNumber *premiumRecurring;
@property (retain, nonatomic) NSNumber *premiumExpirationDate;
@property (retain, nonatomic) NSNumber *premiumExtendable;
@property (retain, nonatomic) NSNumber *premiumPending;
@property (retain, nonatomic) NSNumber *premiumCancellationPending;
@property (retain, nonatomic) NSNumber *canPurchaseUploadAllowance;
@property (retain, nonatomic) NSString *sponsoredGroupName;
@property (retain, nonatomic) NSNumber *sponsoredGroupRole;
@property (retain, nonatomic) NSNumber *premiumUpgradable;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
