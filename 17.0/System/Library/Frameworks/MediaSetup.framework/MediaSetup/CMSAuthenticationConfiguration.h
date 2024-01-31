@class NSString, NSURL;

@interface CMSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clientID;
@property (readonly) NSString *clientSecret;
@property (readonly) NSURL *authorizationURL;
@property (readonly) NSString *scope;

+ (id)authConfigurationFromMSAuthData:(id)a0;
+ (id)authConfigurationWithClientID:(id)a0 clientSecret:(id)a1 authorizationURL:(id)a2 scope:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)basicPropertiesDictionary;
- (id)initWithClientID:(id)a0 clientSecret:(id)a1 authorizationURL:(id)a2 scope:(id)a3;

@end
