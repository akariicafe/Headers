@class NSString, NSDictionary, NSArray, NSError, NSMutableDictionary;

@interface AMSMetricsLoggingEvent : AMSMetricsEvent <NSMutableCopying>

@property (copy, nonatomic) NSDictionary *breadcrumbs;
@property (readonly, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *clientApp;
@property (copy, nonatomic) NSString *clientBuildType;
@property (copy, nonatomic) NSString *currentProcess;
@property (copy, nonatomic) NSString *engagementEventType;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *errorTitle;
@property (nonatomic) long long errorUserInfoCryptoCode;
@property (nonatomic) BOOL errorUserInfoEngagementPresented;
@property (nonatomic) long long errorUserInfoServerErrorCode;
@property (nonatomic) long long errorUserInfoStatusCode;
@property (copy, nonatomic) NSArray *eventDestinations;
@property (nonatomic) double eventEndTime;
@property (nonatomic) BOOL eventInlineInterruption;
@property (copy, nonatomic) NSString *eventParamEventType;
@property (copy, nonatomic) NSString *eventParamItemId;
@property (copy, nonatomic) NSString *eventParamProductType;
@property (copy, nonatomic) NSString *eventParamSource;
@property (copy, nonatomic) NSString *eventParamSuccess;
@property (copy, nonatomic) NSString *eventPlacement;
@property (copy, nonatomic) NSString *eventServiceType;
@property (nonatomic) double eventStartTime;
@property (copy, nonatomic) NSDictionary *jsVersions;
@property (copy, nonatomic) NSArray *jsVersionMap;
@property (readonly, nonatomic) NSString *lastBreadcrumb;
@property (readonly, nonatomic) double lastBreadcrumbDuration;
@property (nonatomic) long long logLevel;
@property (copy, nonatomic) NSString *originatingURL;
@property (copy, nonatomic) NSString *originatingURLParamBagProfile;
@property (copy, nonatomic) NSString *originatingURLParamBagProfileVersion;
@property (copy, nonatomic) NSString *releaseVersion;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSMutableDictionary *underlyingDictionaryForSentry;
@property (nonatomic) long long underlyingErrorCode;
@property (copy, nonatomic) NSString *underlyingErrorDomain;
@property (copy, nonatomic) NSString *underlyingErrorMessage;
@property (copy, nonatomic) NSString *underlyingErrorTitle;
@property (nonatomic) long long underlyingErrorUserInfoCryptoCode;
@property (nonatomic) BOOL underlyingErrorUserInfoEngagementPresented;
@property (nonatomic) long long underlyingErrorUserInfoServerErrorCode;
@property (nonatomic) long long underlyingErrorUserInfoStatusCode;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlParamBagProfile;
@property (copy, nonatomic) NSString *urlParamBagProfileVersion;

+ (id)_propertyValueClassesForKnownProperties;
+ (id)shouldSampleErrorsWithBag:(id)a0;

- (void)setSubsystem:(id)a0;
- (void)setCategory:(id)a0;
- (void).cxx_destruct;
- (id)getBuildType;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 error:(id)a2;
- (void)prepareEvent;
- (id)stringForLogLevel:(long long)a0;
- (id)underlyingDictionaryOverride;

@end
