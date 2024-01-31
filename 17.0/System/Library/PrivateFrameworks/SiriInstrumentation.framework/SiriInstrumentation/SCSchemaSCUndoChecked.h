@class NSData, SCSchemaSCCheckUndoResponse;

@interface SCSchemaSCUndoChecked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SCSchemaSCCheckUndoResponse *checkUndoResponse;
@property (nonatomic) BOOL hasCheckUndoResponse;
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
- (void)deleteCheckUndoResponse;

@end
