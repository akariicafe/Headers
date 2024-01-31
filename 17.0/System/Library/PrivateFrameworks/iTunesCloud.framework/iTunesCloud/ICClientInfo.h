@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) ICClientInfo *defaultInfo;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_clientIdentifierForUserAgent;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, copy, nonatomic) NSString *bagProfile;
@property (readonly, copy, nonatomic) NSString *bagProfileVersion;

+ (id)_clientInfoForCloudDaemonOriginatedMusicKitRequestWithRequestingBundleIdentifier:(id)a0;
+ (id)clientInfoForMusicKitRequestWithClientIdentifier:(id)a0 clientVersion:(id)a1;
+ (id)clientInfoForMusicKitRequestWithClientIdentifier:(id)a0 clientVersion:(id)a1 bundleIdentifier:(id)a2;

- (unsigned long long)hash;
- (id)initWithSystemApplicationType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setDefaultBagProfileForClientIdentifier:(id)a0;
- (id)_clientInfoCopyWithClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
