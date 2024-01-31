@class NSArray, NSData;

@interface FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isReadingIntelligenceAttempteds;
@property (copy, nonatomic) NSArray *isReadingIntelligenceUseds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsReadingIntelligenceUsed;
- (void)addIsReadingIntelligenceAttempted:(BOOL)a0;
- (void)addIsReadingIntelligenceUsed:(BOOL)a0;
- (void)clearIsReadingIntelligenceAttempted;
- (void)clearIsReadingIntelligenceUsed;
- (void)deleteIsReadingIntelligenceAttempted;
- (BOOL)isReadingIntelligenceAttemptedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceAttemptedCount;
- (BOOL)isReadingIntelligenceUsedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceUsedCount;

@end
