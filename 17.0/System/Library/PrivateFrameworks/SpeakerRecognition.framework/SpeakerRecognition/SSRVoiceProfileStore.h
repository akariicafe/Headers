@class SSRVoiceProfileStorePrefs, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileStore : NSObject

@property (retain) NSMutableArray *voiceProfileArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SSRVoiceProfileStorePrefs *storePrefs;

+ (id)sharedInstance;

- (id)updateVoiceProfile:(id)a0 withUserName:(id)a1;
- (void).cxx_destruct;
- (id)deleteUserVoiceProfile:(id)a0;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)a0 withAsset:(id)a1;
- (id)initStore;
- (BOOL)_checkIfRetrainingRequiredForProfile:(id)a0;
- (id)_deleteUserVoiceProfile:(id)a0;
- (id)_enrolledVoiceProfiles;
- (id)_getTopScoringProfileIdFromScores:(id)a0;
- (void)_loadVoiceProfiles;
- (void)_logVoiceProfileConfusionWithCleanup:(BOOL)a0;
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)a0 withForceRetrain:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_retrainVoiceProfile:(id)a0 withContext:(id)a1;
- (id)_retrainVoiceProfile:(id)a0 withContext:(id)a1 withUtterances:(id)a2;
- (void)_saveTrainedUsers:(id)a0;
- (void)_synchronizeSiriVoiceProfilesWithAssistant;
- (void)_updateTrainedUsersWithAction:(unsigned long long)a0 UserVoiceProfile:(id)a1;
- (void)addImplicitUtterance:(id)a0 toVoiceProfile:(id)a1 withAsset:(id)a2 withTriggerSource:(id)a3 withAudioInput:(id)a4 withCompletion:(id /* block */)a5;
- (void)addUserVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)checkIfVoiceProfile:(id)a0 needsUpdatedWith:(id)a1 withCategory:(unsigned long long)a2;
- (BOOL)cleanupDuplicatedProfiles;
- (void)cleanupInvalidSiriProfilesFromPersonalDevicesForLanguage:(id)a0 appDomain:(id)a1;
- (void)cleanupVoiceProfileStore:(id /* block */)a0;
- (id)copyAudioFiles:(id)a0 toProfile:(id)a1 forModelType:(unsigned long long)a2;
- (BOOL)evaluateImplicitAdditionPolicyWithScores:(id)a0 forProfile:(id)a1 withImplicitThreshold:(float)a2 withDeltaThreshold:(float)a3;
- (void)isImplicitTrainingRequiredToVoiceProfile:(id)a0 withAsset:(id)a1 completion:(id /* block */)a2;
- (void)logVoiceProfileConfusionWithCleanup:(BOOL)a0;
- (void)migrateVoiceProfilesIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)retrainVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (id)userVoiceProfileForVoiceProfileID:(id)a0;
- (id)userVoiceProfilesForAppDomain:(id)a0;
- (id)userVoiceProfilesForAppDomain:(id)a0 forLocale:(id)a1;
- (id)userVoiceProfilesForLocale:(id)a0;

@end
