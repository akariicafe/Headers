@class NSString, HDFHIRAuthResponse;

@interface HKClinicalEphemeralAccount : HKClinicalAccount <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse;
@property (readonly, copy, nonatomic) NSString *requestedScopeString;

+ (id)ephemeralAccountIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGateway:(id)a0 authResponse:(id)a1 requestedScopeString:(id)a2;
- (id)initWithProvenance:(id)a0 authResponse:(id)a1 requestedScopeString:(id)a2;

@end
