@class NSString, NSArray;

@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSArray *supportedAccountProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredAccountProviderIdentifiers;
@property (copy, nonatomic) NSString *verificationToken;
@property (nonatomic) BOOL includeAccountProviderIdentifier;
@property (nonatomic) BOOL includeAuthenticationExpirationDate;
@property (copy, nonatomic) NSString *localizedVideoTitle;
@property (nonatomic, getter=isInterruptionAllowed) BOOL interruptionAllowed;
@property (nonatomic) BOOL forceAuthentication;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (copy, nonatomic) NSArray *applicationAccountProviders;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
