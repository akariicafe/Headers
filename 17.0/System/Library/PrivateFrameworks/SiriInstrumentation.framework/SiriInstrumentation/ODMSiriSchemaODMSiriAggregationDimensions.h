@class SISchemaISOLocale, NSData;

@interface ODMSiriSchemaODMSiriAggregationDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char aggregationIntervalInDays : 1; unsigned char aggregationIntervalStartTimestampInSecondsSince2001 : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) unsigned int aggregationIntervalInDays;
@property (nonatomic) BOOL hasAggregationIntervalInDays;
@property (nonatomic) double aggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic) BOOL hasAggregationIntervalStartTimestampInSecondsSince2001;
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
- (void)deleteAggregationIntervalInDays;
- (void)deleteAggregationIntervalStartTimestampInSecondsSince2001;
- (void)deleteSiriInputLocale;

@end
