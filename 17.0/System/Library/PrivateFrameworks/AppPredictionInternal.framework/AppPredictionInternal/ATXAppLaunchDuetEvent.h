@class NSString;

@interface ATXAppLaunchDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) long long appLaunchState;
@property (readonly, nonatomic) NSString *launchReason;

+ (BOOL)_acceptableLaunchReason:(id)a0;

- (id)initWithCurrentContextStoreValues;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (id)identifier;
- (id)description;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0 appLaunchState:(long long)a1 launchReason:(id)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
