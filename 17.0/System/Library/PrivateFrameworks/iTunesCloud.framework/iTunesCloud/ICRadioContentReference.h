@class NSString;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contentType;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;

+ (id)storeItemWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)matchDictionaryWithSubscriptionStatus:(id)a0;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)a0;

@end
