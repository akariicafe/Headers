@class NSString, NSNumber;

@interface ASCDefaults : NSObject

@property (class, readonly) ASCDefaults *daemonDefaults;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *storefrontLocaleID;
@property (nonatomic) BOOL forceRightToLeftLayout;
@property (nonatomic) BOOL disableShutdownTimer;
@property (nonatomic) BOOL enableWebInspector;
@property (copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property (nonatomic) BOOL forceStandaloneWatch;
@property (copy, nonatomic) NSString *debugPackageURL;
@property (nonatomic) BOOL preferInternalJS;
@property (copy, nonatomic) NSString *jsVersion;

- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;

@end
