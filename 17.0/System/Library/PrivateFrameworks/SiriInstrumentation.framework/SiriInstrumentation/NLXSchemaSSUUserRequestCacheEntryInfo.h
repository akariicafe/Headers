@class NSData, NLXSchemaSSUUserRequestMatchInfo;

@interface NLXSchemaSSUUserRequestCacheEntryInfo : SISchemaInstrumentationMessage {
    struct { unsigned char triggerReason : 1; unsigned char categoryType : 1; unsigned char numEncodingSimilarityScoreComparisons : 1; unsigned char closestNegativeExampleScore : 1; unsigned char closestPositiveExampleScore : 1; } _has;
}

@property (nonatomic) int triggerReason;
@property (nonatomic) BOOL hasTriggerReason;
@property (nonatomic) int categoryType;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) unsigned int numEncodingSimilarityScoreComparisons;
@property (nonatomic) BOOL hasNumEncodingSimilarityScoreComparisons;
@property (nonatomic) double closestNegativeExampleScore;
@property (nonatomic) BOOL hasClosestNegativeExampleScore;
@property (nonatomic) double closestPositiveExampleScore;
@property (nonatomic) BOOL hasClosestPositiveExampleScore;
@property (retain, nonatomic) NLXSchemaSSUUserRequestMatchInfo *matchInfo;
@property (nonatomic) BOOL hasMatchInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMatchInfo;
- (void)deleteCategoryType;
- (void)deleteClosestNegativeExampleScore;
- (void)deleteClosestPositiveExampleScore;
- (void)deleteNumEncodingSimilarityScoreComparisons;
- (void)deleteTriggerReason;

@end
