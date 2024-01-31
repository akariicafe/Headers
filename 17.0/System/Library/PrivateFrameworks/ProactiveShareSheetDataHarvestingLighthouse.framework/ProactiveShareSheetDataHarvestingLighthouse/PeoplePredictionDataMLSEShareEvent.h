@class PeoplePredictionDataTrialIdentifier, NSString, NSMutableArray, PeoplePredictionDataFeaturizationConfig;

@interface PeoplePredictionDataMLSEShareEvent : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *featurizedCandidates;
@property (readonly, nonatomic) BOOL hasFeaturizationConfig;
@property (retain, nonatomic) PeoplePredictionDataFeaturizationConfig *featurizationConfig;
@property (readonly, nonatomic) BOOL hasTrialIdentifier;
@property (retain, nonatomic) PeoplePredictionDataTrialIdentifier *trialIdentifier;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;

+ (Class)featurizedCandidateType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;
- (void)addFeaturizedCandidate:(id)a0;
- (void)clearFeaturizedCandidates;
- (id)featurizedCandidateAtIndex:(unsigned long long)a0;
- (unsigned long long)featurizedCandidatesCount;

@end
