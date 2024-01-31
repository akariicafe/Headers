@class NSString, NSNumber;

@interface ATXModeConfigurationMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSString *modeSemanticType;
@property (nonatomic) BOOL hasSmartTrigger;
@property (nonatomic) BOOL hasAreaTrigger;
@property (nonatomic) BOOL hasTimeTrigger;
@property (nonatomic) BOOL hasAppTrigger;
@property (nonatomic) BOOL hasScreenActivityTrigger;
@property (nonatomic) BOOL hasWorkoutTrigger;
@property (nonatomic) BOOL hasSleepTrigger;
@property (nonatomic) BOOL hasDrivingTrigger;
@property (nonatomic) unsigned long long numAllowedApps;
@property (nonatomic) unsigned long long numAllowedContacts;
@property (nonatomic) unsigned long long numDeniedApps;
@property (nonatomic) unsigned long long numDeniedContacts;
@property (nonatomic) BOOL isAutomaticallyGenerated;
@property (nonatomic) BOOL doesImpactAvailability;
@property (nonatomic) BOOL hasCustomHomeScreen;
@property (nonatomic) unsigned long long numCustomHomeScreens;
@property (nonatomic) BOOL hasCustomHomeScreenUsedInOtherModes;
@property (nonatomic) unsigned long long numLockScreenPosters;
@property (copy, nonatomic) NSString *appConfigurationType;
@property (copy, nonatomic) NSString *contactConfigurationType;
@property (nonatomic) unsigned long long numAcceptedSuggestedHomePages;
@property (nonatomic) unsigned long long numAcceptedSuggestedLockScreens;
@property (nonatomic) unsigned long long numAcceptedSuggestedApps;
@property (nonatomic) unsigned long long numAcceptedSuggestedContacts;
@property (nonatomic) BOOL didRemoveSuggestedPage;
@property (nonatomic) BOOL isSleepMigrated;
@property (nonatomic) unsigned long long numAppConfigurations;
@property (nonatomic) BOOL isSharingAcrossDevices;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSNumber *deploymentId;
@property (nonatomic) BOOL wasQuickStartPlatterShown;
@property (nonatomic) BOOL wasColoringBookSeen;

- (id)metricName;
- (id)init;
- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end
