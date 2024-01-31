@class NSArray, ODMSiriSchemaODMSiriAggregationInterval, NSData;

@interface ODMSiriSchemaODMSiriCountsReportedAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) BOOL hasAggregationInterval;
@property (copy, nonatomic) NSArray *siriCountsAlls;
@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)addSegments:(int)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)segmentsCount;
- (id)initWithJSON:(id)a0;
- (void)addSiriCountsAll:(id)a0;
- (void)clearSegments;
- (void)clearSiriCountsAll;
- (void)deleteAggregationInterval;
- (void)deleteSegments;
- (void)deleteSiriCountsAll;
- (int)segmentsAtIndex:(unsigned long long)a0;
- (id)siriCountsAllAtIndex:(unsigned long long)a0;
- (unsigned long long)siriCountsAllCount;

@end
