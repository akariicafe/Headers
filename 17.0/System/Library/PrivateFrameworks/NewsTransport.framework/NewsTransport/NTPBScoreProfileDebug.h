@interface NTPBScoreProfileDebug : PBCodable <NSCopying> {
    struct { unsigned char audioMultiplier : 1; unsigned char bundleFreeMultiplier : 1; unsigned char bundlePaidMultiplier : 1; unsigned char contentTriggerDampener : 1; unsigned char evergreenMultiplier : 1; unsigned char featuredMultiplier : 1; unsigned char groupingReason : 1; unsigned char halfLifeCoefficient : 1; unsigned char listenedPenalty : 1; unsigned char multiplierDampener : 1; unsigned char mutedVoteDampener : 1; unsigned char nicheContentMultiplier : 1; unsigned char readPenalty : 1; unsigned char scoringContext : 1; unsigned char scoringType : 1; unsigned char seenPenalty : 1; unsigned char sparseTagsPenalty : 1; unsigned char timeDecayPenalty : 1; unsigned char userConversionScore : 1; } _has;
}

@property (nonatomic) BOOL hasUserConversionScore;
@property (nonatomic) double userConversionScore;
@property (nonatomic) BOOL hasBundlePaidMultiplier;
@property (nonatomic) double bundlePaidMultiplier;
@property (nonatomic) BOOL hasBundleFreeMultiplier;
@property (nonatomic) double bundleFreeMultiplier;
@property (nonatomic) BOOL hasFeaturedMultiplier;
@property (nonatomic) double featuredMultiplier;
@property (nonatomic) BOOL hasAudioMultiplier;
@property (nonatomic) double audioMultiplier;
@property (nonatomic) BOOL hasEvergreenMultiplier;
@property (nonatomic) double evergreenMultiplier;
@property (nonatomic) BOOL hasSeenPenalty;
@property (nonatomic) double seenPenalty;
@property (nonatomic) BOOL hasReadPenalty;
@property (nonatomic) double readPenalty;
@property (nonatomic) BOOL hasSparseTagsPenalty;
@property (nonatomic) double sparseTagsPenalty;
@property (nonatomic) BOOL hasTimeDecayPenalty;
@property (nonatomic) double timeDecayPenalty;
@property (nonatomic) BOOL hasNicheContentMultiplier;
@property (nonatomic) double nicheContentMultiplier;
@property (nonatomic) BOOL hasHalfLifeCoefficient;
@property (nonatomic) double halfLifeCoefficient;
@property (nonatomic) BOOL hasContentTriggerDampener;
@property (nonatomic) double contentTriggerDampener;
@property (nonatomic) BOOL hasMultiplierDampener;
@property (nonatomic) double multiplierDampener;
@property (nonatomic) BOOL hasMutedVoteDampener;
@property (nonatomic) double mutedVoteDampener;
@property (nonatomic) BOOL hasScoringType;
@property (nonatomic) long long scoringType;
@property (nonatomic) BOOL hasGroupingReason;
@property (nonatomic) long long groupingReason;
@property (nonatomic) BOOL hasScoringContext;
@property (nonatomic) long long scoringContext;
@property (nonatomic) BOOL hasListenedPenalty;
@property (nonatomic) double listenedPenalty;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
