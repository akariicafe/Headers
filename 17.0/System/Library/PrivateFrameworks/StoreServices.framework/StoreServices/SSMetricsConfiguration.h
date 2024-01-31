@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSMetricsConfiguration : NSObject {
    NSSet *_blacklistedEvents;
    NSDictionary *_config;
    BOOL _disabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    BOOL _sendDisabled;
}

@property (readonly, nonatomic) NSDictionary *fieldsMap;
@property (retain, nonatomic) SSMetricsConfiguration *childConfiguration;
@property (nonatomic) BOOL disableEventDecoration;

+ (void)setReportingFrequencyOverride:(id)a0;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)a0;
+ (id)_reportingFrequencyOverride;

- (void)dealloc;
- (id)compoundStringWithElements:(id)a0;
- (BOOL)isDisabled;
- (id)_initSSMetricsEventConfiguration;
- (BOOL)isEventTypeBlacklisted:(id)a0;
- (id)eventFields;
- (BOOL)isSendDisabled;
- (id)initWithStorePlatformData:(id)a0;
- (id)tokenStringWithElements:(id)a0;
- (id)valueForConfigurationKey:(id)a0;
- (void).cxx_destruct;
- (void)_setReportingFrequencyOverride:(id)a0;
- (id)cookieFields;
- (id)reportingURLString;
- (BOOL)_decorateITMLEvents;
- (BOOL)_configBooleanForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)pingURLs;
- (double)reportingFrequency;
- (id)initWithGlobalConfiguration:(id)a0;
- (id)blacklistedEventFields;

@end
