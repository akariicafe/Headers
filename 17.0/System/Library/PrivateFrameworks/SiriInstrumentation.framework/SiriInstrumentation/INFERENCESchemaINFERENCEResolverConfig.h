@class NSData, INFERENCESchemaINFERENCEContactResolverConfig;

@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *contactConfig;
@property (nonatomic) BOOL hasContactConfig;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichConfigurationtype;

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
- (void)deleteContactConfig;

@end
