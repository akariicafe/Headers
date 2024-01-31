@class NSArray, NTPBScoreProfile, NTPBScoreProfileDebug;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) BOOL isEvergreen;
@property (nonatomic) double featureCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (nonatomic) double embeddingScore;
@property (nonatomic) double tabiScore;
@property (nonatomic) double publisherDampener;
@property (nonatomic) double publisherFavorability;
@property (readonly, nonatomic) double sortingScore;
@property (nonatomic) BOOL hasShadowScores;
@property (nonatomic) float shadowAgedPersonalizationScore;
@property (nonatomic) float shadowTabiScore;
@property (retain, nonatomic) NSArray *cohortMemberships;
@property (retain, nonatomic) NTPBScoreProfile *pbScoreProfile;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithPBScoreProfile:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
