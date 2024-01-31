@class SISchemaUUFRSnippetViewSelected, SISchemaUUFRCasinoCardSelected, NSData;

@interface SISchemaUUFRSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUFRCasinoCardSelected *casinoCardSelected;
@property (nonatomic) BOOL hasCasinoCardSelected;
@property (retain, nonatomic) SISchemaUUFRSnippetViewSelected *snippetViewSelected;
@property (nonatomic) BOOL hasSnippetViewSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSelectionevent;

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
- (void)deleteCasinoCardSelected;
- (void)deleteSnippetViewSelected;

@end
