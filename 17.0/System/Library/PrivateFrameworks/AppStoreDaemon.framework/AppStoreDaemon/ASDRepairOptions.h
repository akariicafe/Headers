@class NSString, NSNumber, NSDictionary;

@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceRevoke;
@property (nonatomic) BOOL forceUpsell;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;
@property (nonatomic) int fairplayStatus;
@property (nonatomic) BOOL isBackground;
@property (copy, nonatomic) NSDictionary *relaunchOptions;

- (id)initWithBundleID:(id)a0;
- (id)initWithBundlePath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleID:(id)a0 accountIdentifier:(id)a1 claimStyle:(long long)a2;

@end
