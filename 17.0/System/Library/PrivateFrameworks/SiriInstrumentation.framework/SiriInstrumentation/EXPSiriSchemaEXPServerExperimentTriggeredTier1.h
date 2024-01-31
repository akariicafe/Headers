@class NSArray, NSData, SISchemaUUID;

@interface EXPSiriSchemaEXPServerExperimentTriggeredTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) BOOL hasPegasusId;
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
- (unsigned long long)allocationCount;
- (void)clearAllocation;
- (void)deletePegasusId;
- (void)addAllocation:(id)a0;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteAllocation;
- (void)deleteCodepathId;

@end
