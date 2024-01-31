@class NSData, ASCodableCloudKitDateComponents;

@interface ASCodableCloudKitCompetition : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _opponentScores;
    struct { int *list; unsigned long long count; unsigned long long size; } _preferredVictoryBadgeStyles;
    struct { long long *list; unsigned long long count; unsigned long long size; } _scores;
    struct { unsigned char currentCacheIndex : 1; unsigned char maximumNumberOfPointsPerDay : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasCurrentCacheIndex;
@property (nonatomic) long long currentCacheIndex;
@property (readonly, nonatomic) unsigned long long scoresCount;
@property (readonly, nonatomic) long long *scores;
@property (readonly, nonatomic) unsigned long long opponentScoresCount;
@property (readonly, nonatomic) long long *opponentScores;
@property (readonly, nonatomic) BOOL hasStartDateComponents;
@property (retain, nonatomic) ASCodableCloudKitDateComponents *startDateComponents;
@property (readonly, nonatomic) BOOL hasDurationDateComponents;
@property (retain, nonatomic) ASCodableCloudKitDateComponents *durationDateComponents;
@property (readonly, nonatomic) unsigned long long preferredVictoryBadgeStylesCount;
@property (readonly, nonatomic) int *preferredVictoryBadgeStyles;
@property (nonatomic) BOOL hasMaximumNumberOfPointsPerDay;
@property (nonatomic) long long maximumNumberOfPointsPerDay;

- (void)addScores:(long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)setScores:(long long *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)clearScores;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)scoresAtIndex:(unsigned long long)a0;
- (void)addPreferredVictoryBadgeStyles:(int)a0;
- (void)addOpponentScores:(long long)a0;
- (void)clearOpponentScores;
- (void)clearPreferredVictoryBadgeStyles;
- (long long)opponentScoresAtIndex:(unsigned long long)a0;
- (int)preferredVictoryBadgeStylesAtIndex:(unsigned long long)a0;
- (void)setOpponentScores:(long long *)a0 count:(unsigned long long)a1;
- (void)setPreferredVictoryBadgeStyles:(int *)a0 count:(unsigned long long)a1;

@end
