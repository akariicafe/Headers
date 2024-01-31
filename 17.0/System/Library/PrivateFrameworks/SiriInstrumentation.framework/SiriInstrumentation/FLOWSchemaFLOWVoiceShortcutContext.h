@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *voiceShortcutActions;
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
- (void)addVoiceShortcutAction:(id)a0;
- (void)clearVoiceShortcutAction;
- (void)deleteVoiceShortcutAction;
- (id)voiceShortcutActionAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceShortcutActionCount;

@end
