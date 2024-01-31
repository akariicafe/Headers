@class USOSchemaUSOGraph, NSData, SISchemaUUID;

@interface NLXSchemaCDMSystemReportedFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) USOSchemaUSOGraph *reason;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) USOSchemaUSOGraph *task;
@property (nonatomic) BOOL hasTask;
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
- (void)deleteReason;
- (void)deleteTask;
- (void)deleteTaskId;

@end
