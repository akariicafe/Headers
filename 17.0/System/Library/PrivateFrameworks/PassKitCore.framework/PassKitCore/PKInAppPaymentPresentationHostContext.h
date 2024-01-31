@class NSString;

@interface PKInAppPaymentPresentationHostContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSString *sceneBundleIdentifier;
@property (copy, nonatomic) NSString *teamID;
@property (nonatomic) BOOL intentTriggered;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHostContext:(id)a0;

@end
