@class NSString, NSURL;

@interface PolicyResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *termsOfService;
@property (readonly, nonatomic) NSString *privacyPolicyText;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTermsOfService:(id)a0 privacyPolicyText:(id)a1 privacyPolicyURL:(id)a2;

@end
