@class NSString, NSDictionary, NSData, NSNumber;

@interface SFCoreSpotlightRankingSignals : NSObject <SFCoreSpotlightRankingSignals, NSSecureCoding, NSCopying> {
    struct { unsigned char wasNominatedAsTopHit : 1; unsigned char isExactMatchOfLaunchString : 1; unsigned char wasEngagedInSpotlight : 1; unsigned char resultQueryRecency : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *topicalityScore;
@property (copy, nonatomic) NSNumber *freshness;
@property (copy, nonatomic) NSNumber *engagementScore;
@property (copy, nonatomic) NSNumber *predictedLikelihoodOfEngagement;
@property (nonatomic) BOOL wasNominatedAsTopHit;
@property (copy, nonatomic) NSNumber *sodiumL2Score;
@property (nonatomic) BOOL isExactMatchOfLaunchString;
@property (nonatomic) BOOL wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasIsExactMatchOfLaunchString;
- (BOOL)hasResultQueryRecency;
- (BOOL)hasWasEngagedInSpotlight;
- (BOOL)hasWasNominatedAsTopHit;

@end
