@class NSString, AKAppleIDAuthenticationContext;

@interface AMSPurchaseSIWA : AMSPurchase <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *teamID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (id)appProvidedData;
- (id)authenticationContextForRequest:(id)a0;

@end
