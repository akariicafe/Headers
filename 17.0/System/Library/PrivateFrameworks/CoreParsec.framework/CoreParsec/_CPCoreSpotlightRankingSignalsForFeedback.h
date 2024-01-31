@class NSData, NSString;

@interface _CPCoreSpotlightRankingSignalsForFeedback : PBCodable <_CPCoreSpotlightRankingSignalsForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float topicalityScore;
@property (nonatomic) float freshness;
@property (nonatomic) float engagementScore;
@property (nonatomic) float predictedLikelihoodOfEngagement;
@property (nonatomic) BOOL wasNominatedAsTopHit;
@property (nonatomic) float sodiumL2Score;
@property (nonatomic) BOOL isExactMatchOfLaunchString;
@property (nonatomic) BOOL wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
