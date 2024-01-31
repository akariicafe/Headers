@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable <NSCopying> {
    struct { unsigned char lifetimeOldestItemSecs : 1; unsigned char numberEntriesWithHomeLOI : 1; unsigned char numberEntriesWithUnapprovedLOI : 1; unsigned char numberEntriesWithUndefinedLOI : 1; unsigned char numberEntriesWithWorkLOI : 1; unsigned char scoredEntries : 1; unsigned char scoredKnownGood : 1; unsigned char timeSinceLastScoringSecs : 1; unsigned char timestamp : 1; unsigned char networkType : 1; unsigned char scoringCompletionCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasTimeSinceLastScoringSecs;
@property (nonatomic) unsigned long long timeSinceLastScoringSecs;
@property (nonatomic) BOOL hasScoringCompletionCode;
@property (nonatomic) int scoringCompletionCode;
@property (nonatomic) BOOL hasScoredEntries;
@property (nonatomic) unsigned long long scoredEntries;
@property (nonatomic) BOOL hasScoredKnownGood;
@property (nonatomic) unsigned long long scoredKnownGood;
@property (nonatomic) BOOL hasLifetimeOldestItemSecs;
@property (nonatomic) unsigned long long lifetimeOldestItemSecs;
@property (nonatomic) BOOL hasNumberEntriesWithHomeLOI;
@property (nonatomic) unsigned long long numberEntriesWithHomeLOI;
@property (nonatomic) BOOL hasNumberEntriesWithWorkLOI;
@property (nonatomic) unsigned long long numberEntriesWithWorkLOI;
@property (nonatomic) BOOL hasNumberEntriesWithUndefinedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUndefinedLOI;
@property (nonatomic) BOOL hasNumberEntriesWithUnapprovedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUnapprovedLOI;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsScoringCompletionCode:(id)a0;
- (id)scoringCompletionCodeAsString:(int)a0;

@end
