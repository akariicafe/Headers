@class NSString;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (unsigned long long)hash;
- (BOOL)isFrontmost;
- (id)icon;
- (void)encodeWithCoder:(id)a0;
- (id)launchDate;
- (BOOL)isHidden;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)bundleURL;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)processIdentifier;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;

@end
