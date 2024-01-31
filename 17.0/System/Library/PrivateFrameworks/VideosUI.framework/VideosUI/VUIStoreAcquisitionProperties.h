@class NSString, NSNumber;

@interface VUIStoreAcquisitionProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *urlBagKey;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *strongToken;
@property (nonatomic) BOOL ignoresForcedPasswordRestriction;

+ (id)acquisitionPropertiesWithBuyParams:(id)a0 urlbagKey:(id)a1;
+ (id)metricsAugumentedBuyParamsWithBuyParams:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
