@class NSString, ASDBetaAppLaunchInfo;

@interface TFBetaLaunchHandleConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) ASDBetaAppLaunchInfo *launchInfo;

+ (id)configurationFromUserInfo:(id)a0;

- (id)initWithBundleURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedAsUserInfo;
- (id)initWithBundleIdentifier:(id)a0 preloadingLaunchInfo:(id)a1;
- (id)initWithBundleURL:(id)a0 preloadingLaunchInfo:(id)a1;

@end
