@class NSString;
@protocol CADPermissionValidator;

@interface CADCombinedPermissionValidator : NSObject <CADPermissionValidator> {
    id<CADPermissionValidator> _validator1;
    id<CADPermissionValidator> _validator2;
}

@property (readonly) long long eventAuthorization;
@property (readonly) long long remindersAuthorization;
@property (readonly) int eventAccessLevel;
@property (readonly) BOOL hasReminderAccess;
@property (readonly) BOOL isFirstPartyCalendarApp;
@property (readonly) BOOL isCalendarDaemon;
@property (readonly) BOOL isRemoteUIExtension;
@property (readonly) BOOL canAccessDatabaseBookmarks;
@property (readonly) BOOL canModifySuggestedEventCalendar;
@property (readonly) BOOL canMakeSpotlightChanges;
@property (readonly) BOOL canModifyBirthdayCalendar;
@property (readonly) BOOL canRequestDiagnostics;
@property (readonly) BOOL canModifyCalendarDatabase;
@property (readonly) BOOL testingAccessLevelGranted;
@property (readonly) BOOL internalAccessLevelGranted;
@property (readonly) BOOL storageManagementAccessGranted;
@property (readonly) BOOL hasSyncClientEntitlement;
@property (readonly) BOOL hasCalendarToolEntitlement;
@property (readonly) BOOL hasChangeIdTrackingOverrideEntitlement;
@property (readonly) BOOL hasNotificationCountEntitlement;
@property (readonly) BOOL hasManagedConfigurationBundleIDOverrideEntitlement;
@property (readonly) BOOL shouldTrustClientEnforcedManagedConfigurationAccess;
@property (readonly) BOOL allowsCustomDatabasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPermissionValidator:(id)a0 andValidator:(id)a1;

@end
