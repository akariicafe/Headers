@class NSString, NLXSchemaCDMInternalSpanDataTier1, NSData, SISchemaUUID;

@interface NLXSchemaCDMMatchingSpanTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) BOOL hasInput;
@property (retain, nonatomic) NLXSchemaCDMInternalSpanDataTier1 *internalSpanData;
@property (nonatomic) BOOL hasInternalSpanData;
@property (copy, nonatomic) NSString *semanticValue;
@property (nonatomic) BOOL hasSemanticValue;
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
- (void)deleteInput;
- (void)deleteInternalSpanData;
- (void)deleteLinkId;
- (void)deleteSemanticValue;

@end
