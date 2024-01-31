@class NSUserDefaults;

@interface FBKSharedConstants : FBKSSharedConstants

@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;

+ (id)modelName;
+ (void)initialize;
+ (BOOL)isProductionEnvironment;
+ (id)publicPortalURL;
+ (void)recordCurrentLanguagePreference;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKSEnvironment;
+ (long long)currentLegalVersion;
+ (id)darkModeCSS;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (BOOL)isEnhancedLoggingEnabled;
+ (BOOL)isRunningInFBA;
+ (BOOL)listsFormsFetchedByTat;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (id)publicBetaURL;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (id)seedPortalURL;
+ (BOOL)tracksFileUploadsLocally;
+ (BOOL)usesPersistentStore;
+ (BOOL)usesTemporaryDraftsDirectory;

@end
