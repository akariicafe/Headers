@class ACHMonthlyChallengeTemplateSource, NSString, ACHTemplateSourceScheduler, ACHMobileAssetProvider, HDProfile, HDXPCClient, ACHEarnedInstanceStore, NSObject, ACHTemplateStore;
@protocol ACHAwardingScheduler, ACHAchievementStoring;

@interface ACHServer : NSObject <ACHServerInterface, _HKXPCExportable>

@property (retain, nonatomic) HDXPCClient *client;
@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) NSObject<ACHAwardingScheduler> *awardingScheduler;
@property (retain, nonatomic) id<ACHAchievementStoring> achievementStore;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (retain, nonatomic) ACHTemplateSourceScheduler *templateSourceScheduler;
@property (retain, nonatomic) ACHMonthlyChallengeTemplateSource *monthlyChallengeTemplateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverWithClient:(id)a0 templateStore:(id)a1 earnedInstanceStore:(id)a2 awardingScheduler:(id)a3 achievementStore:(id)a4 mobileAssetProvider:(id)a5 templateSourceScheduler:(id)a6 monthlyChallengeTemplateSource:(id)a7 error:(id *)a8;
+ (id)serverWithTemplateStore:(id)a0 earnedInstanceStore:(id)a1 awardingScheduler:(id)a2 achievementStore:(id)a3 mobileAssetProvider:(id)a4 templateSourceScheduler:(id)a5 monthlyChallengeTemplateSource:(id)a6;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (void)connectionInvalidated;
- (void)remote_removeAllEarnedInstancesWithCompletion:(id /* block */)a0;
- (void)remote_removeAllTemplatesWithCompletion:(id /* block */)a0;
- (void)remote_fetchAllTemplatesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_addEarnedInstance:(id)a0 completion:(id /* block */)a1;
- (void)remote_addTemplate:(id)a0 completion:(id /* block */)a1;
- (void)remote_availableMobileAssetsWithCompletion:(id /* block */)a0;
- (void)remote_fetchAchievementWithTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)a0;
- (void)remote_fetchAllAchievementsWithCompletion:(id /* block */)a0;
- (void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)a0 completion:(id /* block */)a1;
- (void)remote_forceAwardingSchedulerWithCompletion:(id /* block */)a0;
- (void)remote_monthlyChallengeForDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeEarnedInstance:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeTemplate:(id)a0 completion:(id /* block */)a1;
- (void)remote_runMonthlyChallengesWithCompletion:(id /* block */)a0;
- (void)remote_setActivityChallengeAssetsServerURL:(id)a0 completion:(id /* block */)a1;
- (void)remote_templateForMonthlyChallengeType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithClient:(id)a0 templateStore:(id)a1 earnedInstanceStore:(id)a2 awardingScheduler:(id)a3 achievementStore:(id)a4 mobileAssetProvider:(id)a5 templateSourceScheduler:(id)a6 monthlyChallengeTemplateSource:(id)a7;

@end
