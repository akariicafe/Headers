@class NSString, NSArray;

@interface FCNewsletterSubscribeCommand : FCCommand

@property (copy, nonatomic) NSString *newsletter;
@property (copy, nonatomic) NSArray *includeArray;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithNewsletter:(id)a0 includeArray:(id)a1;

@end
