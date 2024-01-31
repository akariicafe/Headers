@class AACXPCClient;

@interface AACAwardsClient : NSObject

@property (retain, nonatomic) AACXPCClient *client;

- (id)ephemeralAchievementWithTemplateUniqueName:(id)a0 error:(id *)a1;
- (id)init;
- (void)provideAchievementProgressUpdates:(id)a0 completion:(id /* block */)a1;
- (void)scheduleAwardingWithCompletion:(id /* block */)a0;
- (void)removeTemplatesForSource:(id)a0 completion:(id /* block */)a1;
- (void)allAchievementsWithCompletion:(id /* block */)a0;
- (void)templatesForSource:(id)a0 completion:(id /* block */)a1;
- (void)addTemplates:(id)a0 completion:(id /* block */)a1;
- (id)allAchievementsWithError:(id *)a0;
- (void).cxx_destruct;
- (void)removeTemplatesWithUniqueNames:(id)a0 completion:(id /* block */)a1;
- (void)removeTemplates:(id)a0 completion:(id /* block */)a1;
- (void)removeEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)requestProgressUpdateForProgressProviderIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)addEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)requestAwardingWithTriggers:(unsigned long long)a0 completion:(id /* block */)a1;

@end
