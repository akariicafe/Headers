@class NSError, AKAuthorization;
@protocol AKCredential;

@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKAuthorization *authorization;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) id<AKCredential> authorizationCredential;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuthorization:(id)a0 error:(id)a1;
- (BOOL)isEqualToPurchaseSIWAAuthorizationResult:(id)a0;

@end
