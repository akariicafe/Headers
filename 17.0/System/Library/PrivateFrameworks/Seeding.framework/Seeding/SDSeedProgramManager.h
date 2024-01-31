@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)isEnrolledInSeedProgram;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_createFeedbackAssistantSymlink;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_clearAudience;
+ (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (long long)_seedProgramForString:(id)a0;
+ (BOOL)fixUpAssetAudience;
+ (long long)_legacyCurrentSeedProgram;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (void)_setSeedProgramPref:(long long)a0;
+ (void)_clearSeedCatalog;
+ (long long)_currentSeedProgramFromDisk;
+ (BOOL)_currentCatalogIsSeed;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)_currentAudienceIsSeed;
+ (id)_loadSeedAudiencesFromPlist;
+ (long long)currentSeedProgram;

@end
