@class NSArray, NSString, NSData;

@interface MHSchemaMHUserEngagementAccumulatedAggregationStats : SISchemaInstrumentationMessage {
    struct { unsigned char aggregationStartTimestamp : 1; unsigned char numberOfDaysAggregation : 1; unsigned char intendedRequestRatio : 1; } _has;
}

@property (nonatomic) double aggregationStartTimestamp;
@property (nonatomic) BOOL hasAggregationStartTimestamp;
@property (nonatomic) int numberOfDaysAggregation;
@property (nonatomic) BOOL hasNumberOfDaysAggregation;
@property (copy, nonatomic) NSArray *aggregationStats;
@property (copy, nonatomic) NSString *cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) BOOL hasIntendedRequestRatio;
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
- (void)deleteAggregationStartTimestamp;
- (void)addAggregationStats:(id)a0;
- (id)aggregationStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)aggregationStatsCount;
- (void)clearAggregationStats;
- (void)deleteAggregationStats;
- (void)deleteCohortType;
- (void)deleteIntendedRequestRatio;
- (void)deleteNumberOfDaysAggregation;

@end
