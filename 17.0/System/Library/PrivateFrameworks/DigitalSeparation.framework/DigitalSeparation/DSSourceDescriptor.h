@class NSString, NSArray, NSDictionary, NSBundle;

@interface DSSourceDescriptor : NSObject {
    NSString *_sourceName;
    NSBundle *_localizationBundle;
    NSDictionary *_sourceProperties;
}

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedAppName;
@property (readonly, copy, nonatomic) NSString *localizedAlertButtonLabel;
@property (readonly, copy, nonatomic) NSString *localizedStopAllLabel;
@property (readonly, copy, nonatomic) NSString *localizedStopByPersonAlertText;
@property (readonly, copy, nonatomic) NSString *localizedStopAllAlertLabel;
@property (readonly, copy, nonatomic) NSString *localizedStopAllAlertDetail;
@property (readonly, nonatomic) BOOL supportsResourceTypes;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSArray *darwinNotifications;
@property (readonly, copy, nonatomic) NSDictionary *ignoreErrors;
@property (readonly, copy, nonatomic) NSString *dataUsageBundleIdentifier;
@property (readonly, nonatomic) BOOL requiresWifi;
@property (readonly, nonatomic) BOOL requiresCellular;
@property (readonly, copy, nonatomic) NSString *correspondingApplicationIdentifier;

+ (void)initialize;
+ (id)sourceDescriptorForSource:(id)a0;
+ (id)sourceDescriptorForSource:(id)a0 localizationBundle:(id)a1;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)localizedAlertDetailForSelectedPeople:(id)a0;
- (id)localizedStopAllAlertDetailForPeople:(id)a0;
- (id)localizedStopByPerson:(id)a0;
- (id)localizedStopByTypeSubtitleForSharingType:(id)a0;
- (id)localizedDetailTextByType:(id)a0;
- (id)localizedPublicSharingDetailTextByType:(id)a0;
- (BOOL)shouldIgnoreError:(id)a0;

@end
