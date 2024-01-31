@class NSString, NSData;

@interface FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *autoshortcutTemplate;
@property (nonatomic) BOOL hasAutoshortcutTemplate;
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
- (void)deleteAutoshortcutTemplate;

@end
