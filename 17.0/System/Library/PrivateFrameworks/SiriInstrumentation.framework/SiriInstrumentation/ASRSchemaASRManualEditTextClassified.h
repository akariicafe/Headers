@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRManualEditTextClassified : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (copy, nonatomic) NSArray *manualEdits;
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
- (void)addManualEdits:(id)a0;
- (void)clearManualEdits;
- (void)deleteManualEdits;
- (void)deleteOriginalAsrId;
- (id)manualEditsAtIndex:(unsigned long long)a0;
- (unsigned long long)manualEditsCount;

@end
