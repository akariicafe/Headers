@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextualSpansTier1s;
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
- (void)addContextualSpansTier1:(id)a0;
- (void)clearContextualSpansTier1;
- (id)contextualSpansTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansTier1Count;
- (void)deleteContextualSpansTier1;
- (void)deleteLinkId;

@end
