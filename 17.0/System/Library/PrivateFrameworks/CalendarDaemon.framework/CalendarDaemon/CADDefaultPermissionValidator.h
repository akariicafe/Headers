@class ClientIdentity, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    BOOL _allowedEntityTypesValid;
    long long _eventAuthorization;
    long long _remindersAuthorization;
    struct __SecTask { } *_task;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) ClientIdentity *identity;
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

- (id)initWithClientIdentity:(id)a0;
- (void)dealloc;
- (void)_loadAccessPermissionsIfNeeded;
- (id)_valueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
- (BOOL)_valueForBooleanEntitlement:(id)a0 defaultValue:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_valueForStringEntitlement:(id)a0 matchesString:(id)a1;

@end
