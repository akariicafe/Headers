@class NSData, NLXSchemaCDMSiriClientSetupLink;

@interface NLXSchemaCDMSetupLink : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriClientSetupLink *siriClientSetupLink;
@property (nonatomic) BOOL hasSiriClientSetupLink;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichNlxclients;

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
- (void)deleteSiriClientSetupLink;

@end
