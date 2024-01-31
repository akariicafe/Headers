@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasRollout;
    BOOL _hasOverride;
}

@property (nonatomic) BOOL wasLoadedSinceLaunch;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *namespaceId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int experimentDeploymentId;
@property (readonly, nonatomic) int rolloutDeploymentId;

+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (void)setTrialOverridePath;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightTrialClient;
+ (id)sharedSpotlightRankingTrialManager;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)sharedSpotlightPolicyTrialManager;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)currentTrialManagerForClient:(id)a0;
+ (id)getTTRLogsForClient:(id)a0;
+ (id)sharedSpotlightMailTrialManager;
+ (id)sharedSpotlightModelTrialManager;
+ (id)sharedSpotlightUITrialManager;
+ (id)resolveMultipleSpotlightExperiments;

- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (BOOL)hasActiveExperiment;
- (void)loadWithUpdateHandler:(id /* block */)a0;
- (id)getFactorDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasOverride;
- (BOOL)hasActiveRollout;
- (id)getLevelForFactor:(id)a0;
- (void)refreshTrackingId;

@end
