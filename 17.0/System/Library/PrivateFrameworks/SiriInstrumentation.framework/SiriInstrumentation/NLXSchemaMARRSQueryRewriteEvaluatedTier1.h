@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSQueryRewriteEvaluatedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *rewrittenUserUtterances;
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
- (id)rewrittenUserUtterancesAtIndex:(unsigned long long)a0;
- (void)addRewrittenUserUtterances:(id)a0;
- (void)clearRewrittenUserUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUserUtterances;
- (unsigned long long)rewrittenUserUtterancesCount;

@end
