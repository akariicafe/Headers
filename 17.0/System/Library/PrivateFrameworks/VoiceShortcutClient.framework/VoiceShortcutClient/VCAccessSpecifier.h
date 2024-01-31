@class BSAuditToken, NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierWithNoAccess;

- (id)init;
- (BOOL)allowReadingOnScreenContent;
- (void)dealloc;
- (BOOL)isSpringBoard;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowConnection;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowShortcutImport;
- (BOOL)allowHomeResidentShortcutRunning;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (id)bundleIdentifierFromTask;
- (BOOL)isSettingsApp;
- (id)description;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowDropletCreation;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (void).cxx_destruct;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)allowBackgroundShortcutRunningWithAssociatedBundleIdentifier:(id)a0;
- (BOOL)isRemovalService;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowReadAccessForContextualActions;

@end
