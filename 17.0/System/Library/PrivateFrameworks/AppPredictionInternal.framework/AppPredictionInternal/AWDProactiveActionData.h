@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveActionData : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char timestamp : 1; unsigned char cacheRank : 1; unsigned char engagedAction : 1; unsigned char futureMedia : 1; unsigned char shown : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasActionKey;
@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) BOOL hasCacheRank;
@property (nonatomic) int cacheRank;
@property (nonatomic) BOOL hasEngagedAction;
@property (nonatomic) BOOL engagedAction;
@property (nonatomic) BOOL hasFutureMedia;
@property (nonatomic) BOOL futureMedia;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL shown;
@property (readonly, nonatomic) BOOL hasSubscores;
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores;
@property (readonly, nonatomic) BOOL hasHeuristicName;
@property (retain, nonatomic) NSString *heuristicName;
@property (readonly, nonatomic) BOOL hasEngaged;
@property (retain, nonatomic) NSString *engaged;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

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

@end
