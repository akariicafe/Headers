@class NSString;

@interface SSMetricsEvent : NSObject

@property (readonly, retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL shouldSuppressUserInfo;
@property (readonly, nonatomic) BOOL shouldSuppressDSIDHeader;

+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isFieldBlacklistEnabled;
- (id)_dictionaryRepresentationOfBody;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)a0;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)a0 externalValues:(id)a1;
- (void)appendPropertiesToBody:(id)a0;
- (id)decorateReportingURL:(id)a0;
- (BOOL)isBlacklistedByConfiguration:(id)a0;
- (id)millisecondsFromTimeInterval:(double)a0;
- (BOOL)requiresDiagnosticSendingPermission;
- (double)timeIntervalFromMilliseconds:(id)a0;

@end
