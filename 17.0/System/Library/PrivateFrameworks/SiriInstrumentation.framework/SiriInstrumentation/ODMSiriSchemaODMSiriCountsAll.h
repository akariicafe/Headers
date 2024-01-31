@class ODMSiriSchemaODMSiriRequestCounts, ODMSiriSchemaODMDynamicDimensionsAll, NSData;

@interface ODMSiriSchemaODMSiriCountsAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensionsAll *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriRequestCounts *requestCounts;
@property (nonatomic) BOOL hasRequestCounts;
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
- (void)deleteDimensions;
- (void)deleteRequestCounts;

@end
