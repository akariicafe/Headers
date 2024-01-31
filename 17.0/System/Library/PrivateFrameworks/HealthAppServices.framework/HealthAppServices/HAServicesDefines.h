@class NSString;

@interface HAServicesDefines : NSObject

@property (class, readonly, nonatomic) NSString *internalHealthAppURLScheme;
@property (class, readonly, nonatomic) NSString *internalSettingsAppURLScheme;
@property (class, readonly, nonatomic) NSString *externalHealthAppURLScheme;
@property (class, readonly, nonatomic) NSString *externalHealthAppURLHost;
@property (class, readonly, nonatomic) NSString *nanoHealthSettingsBundleIdentifier;
@property (class, readonly, nonatomic) NSString *nanoInternalSettingsAppURLScheme;
@property (class, readonly, nonatomic) NSString *dataTypeDetailHostName;
@property (class, readonly, nonatomic) NSString *healthTrendsHostName;
@property (class, readonly, nonatomic) NSString *sampleTypeHostName;
@property (class, readonly, nonatomic) NSString *sharingOverviewHostName;
@property (class, readonly, nonatomic) NSString *healthAppBrowseHostName;
@property (class, readonly, nonatomic) NSString *healthAppSummaryHostName;
@property (class, readonly, nonatomic) NSString *authorizationManagementHostName;
@property (class, readonly, nonatomic) NSString *healthProfileResourceSpecifier;
@property (class, readonly, nonatomic) NSString *healthAppMedicalIDPath;
@property (class, readonly, nonatomic) NSString *healthAppNotificationSettingsPath;
@property (class, readonly, nonatomic) NSString *healthAppSharingInviteFlowPath;
@property (class, readonly, nonatomic) NSString *healthAppSharingProfilePath;
@property (class, readonly, nonatomic) NSString *healthAppVisionRXIngestionURLPath;
@property (class, readonly, nonatomic) NSString *healthSettingsSourcesHostName;
@property (class, readonly, nonatomic) NSString *queryParameterNameDate;
@property (class, readonly, nonatomic) NSString *queryParameterNameStartDate;
@property (class, readonly, nonatomic) NSString *queryParameterNameEndDate;
@property (class, readonly, nonatomic) NSString *queryParameterNameDataTypeCode;
@property (class, readonly, nonatomic) NSString *queryParameterNameTrendOverlay;
@property (class, readonly, nonatomic) NSString *queryParameterNameSource;
@property (class, readonly, nonatomic) NSString *externalSourceAssistantService;

@end
