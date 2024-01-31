@class NSString;

@interface ASCWebAuthenticationExtensionsClientInputs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL isGoogleLegacyAppIDSupport;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppID:(id)a0 isGoogleLegacyAppIDSupport:(BOOL)a1;

@end
