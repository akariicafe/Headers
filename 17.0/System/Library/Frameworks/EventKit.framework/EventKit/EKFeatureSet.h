@interface EKFeatureSet : NSObject

+ (BOOL)isConservativeEntryEnabled;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)isContinuitySupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)isSuggestionsEnabled;
+ (unsigned long long)_currentSplashScreenVersion;

@end
