@class NSString, CalPreferences;

@interface CDBPreferences : NSObject

@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) BOOL has_enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) BOOL suggestEventLocations;
@property (readonly) BOOL has_suggestEventLocations;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) BOOL sqlProfileLoggingEnabled;
@property (readonly) BOOL has_sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) BOOL suggestedLocationsTestMode;
@property (readonly) BOOL has_suggestedLocationsTestMode;
@property (nonatomic, getter=get_overrideParticipantRoleConstraint, setter=set_overrideParticipantRoleConstraint:) BOOL overrideParticipantRoleConstraint;
@property (readonly) BOOL has_overrideParticipantRoleConstraint;
@property (nonatomic, getter=get_allowUnlimitedMigrationAttempts, setter=set_allowUnlimitedMigrationAttempts:) BOOL allowUnlimitedMigrationAttempts;
@property (readonly) BOOL has_allowUnlimitedMigrationAttempts;
@property (nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property (readonly) BOOL has_kCalPreferredDaysToSyncKey;
@property (nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property (readonly) BOOL has_kCalRemindersPreferredDaysToSyncKey;
@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property (readonly) BOOL has_LastConfirmedSplashScreenVersionViewed;
@property (nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) long long privacyPaneHasBeenAcknowledgedVersion;
@property (readonly) BOOL has_privacyPaneHasBeenAcknowledgedVersion;
@property (nonatomic, getter=get_defaultCalendarStoreUID, setter=set_defaultCalendarStoreUID:) long long defaultCalendarStoreUID;
@property (readonly) BOOL has_defaultCalendarStoreUID;
@property (nonatomic, getter=get_defaultCalendarDatabaseID, setter=set_defaultCalendarDatabaseID:) long long defaultCalendarDatabaseID;
@property (readonly) BOOL has_defaultCalendarDatabaseID;
@property (nonatomic, getter=get_defaultCalendarChangedTimestamp, setter=set_defaultCalendarChangedTimestamp:) long long defaultCalendarChangedTimestamp;
@property (readonly) BOOL has_defaultCalendarChangedTimestamp;
@property (nonatomic, getter=get_migrationAttempts, setter=set_migrationAttempts:) long long migrationAttempts;
@property (readonly) BOOL has_migrationAttempts;
@property (copy, nonatomic, getter=get_defaultCalendarID, setter=set_defaultCalendarID:) NSString *defaultCalendarID;
@property (readonly) BOOL has_defaultCalendarID;
@property (copy, nonatomic, getter=get_defaultCalendarName, setter=set_defaultCalendarName:) NSString *defaultCalendarName;
@property (readonly) BOOL has_defaultCalendarName;
@property (copy, nonatomic, getter=get_defaultCalendarChangedReason, setter=set_defaultCalendarChangedReason:) NSString *defaultCalendarChangedReason;
@property (readonly) BOOL has_defaultCalendarChangedReason;
@property (readonly, nonatomic) CalPreferences *preferences;

+ (id)shared;
+ (id)sharedReadWrite;
+ (id)preferencesForDirectory:(id)a0;
+ (id)sharedReadOnly;

- (id)initWithReadOnly:(BOOL)a0;
- (id)initWithPreferences:(id)a0;
- (void).cxx_destruct;

@end
