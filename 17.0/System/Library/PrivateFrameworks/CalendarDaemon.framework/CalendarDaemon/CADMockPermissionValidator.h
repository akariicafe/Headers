@class NSString;

@interface CADMockPermissionValidator : NSObject <CADPermissionValidator, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long eventAuthorization;
@property (nonatomic) long long remindersAuthorization;
@property (nonatomic) int eventAccessLevel;
@property (nonatomic) BOOL hasReminderAccess;
@property (nonatomic) BOOL isFirstPartyCalendarApp;
@property (nonatomic) BOOL isCalendarDaemon;
@property (nonatomic) BOOL isRemoteUIExtension;
@property (nonatomic) BOOL canAccessDatabaseBookmarks;
@property (nonatomic) BOOL canModifySuggestedEventCalendar;
@property (nonatomic) BOOL canMakeSpotlightChanges;
@property (nonatomic) BOOL canModifyBirthdayCalendar;
@property (nonatomic) BOOL canRequestDiagnostics;
@property (nonatomic) BOOL canModifyCalendarDatabase;
@property (nonatomic) BOOL testingAccessLevelGranted;
@property (nonatomic) BOOL internalAccessLevelGranted;
@property (nonatomic) BOOL storageManagementAccessGranted;
@property (nonatomic) BOOL hasSyncClientEntitlement;
@property (nonatomic) BOOL hasCalendarToolEntitlement;
@property (nonatomic) BOOL hasChangeIdTrackingOverrideEntitlement;
@property (nonatomic) BOOL hasNotificationCountEntitlement;
@property (nonatomic) BOOL hasManagedConfigurationBundleIDOverrideEntitlement;
@property (nonatomic) BOOL shouldTrustClientEnforcedManagedConfigurationAccess;
@property (nonatomic) BOOL allowsCustomDatabasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
