@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSContextualSpanMatcherEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextualSpans;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addContextualSpans:(id)a0;
- (void)clearContextualSpans;
- (id)contextualSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansCount;
- (void)deleteContextualSpans;
- (void)deleteLinkId;

@end
