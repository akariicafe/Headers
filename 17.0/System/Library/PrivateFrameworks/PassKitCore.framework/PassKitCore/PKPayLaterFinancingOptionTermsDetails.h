@class NSURL, NSString;

@interface PKPayLaterFinancingOptionTermsDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *installmentAgreementIdentifier;
@property (copy, nonatomic) NSString *riskPricingAgreementIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
