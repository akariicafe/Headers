@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding, NSCopying> {
    NSString *_bundleID;
    NSString *_bundleVersion;
    long long _platform;
    NSString *_shortVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleID;
@property (readonly) NSString *bundleVersion;
@property (readonly) long long platform;
@property (readonly) NSString *shortVersion;

+ (long long)defaultPlatform;
+ (id)versionWithBundleID:(id)a0 bundleVersion:(id)a1 andShortVersion:(id)a2;
+ (id)versionWithBundleID:(id)a0 bundleVersion:(id)a1 platform:(long long)a2 andShortVersion:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
