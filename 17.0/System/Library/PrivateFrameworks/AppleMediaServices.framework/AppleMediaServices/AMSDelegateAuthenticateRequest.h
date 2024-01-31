@class NSString;

@interface AMSDelegateAuthenticateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *challenge;
@property (copy, nonatomic) NSString *userAgent;

+ (id)preferredUserAgent;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChallenge:(id)a0 userAgent:(id)a1;

@end
