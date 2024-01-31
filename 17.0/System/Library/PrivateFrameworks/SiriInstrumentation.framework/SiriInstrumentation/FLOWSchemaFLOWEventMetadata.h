@class NSString, SISchemaVersion, SISchemaUUID, NSData;

@interface FLOWSchemaFLOWEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SISchemaUUID *flowId;
@property (nonatomic) BOOL hasFlowId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
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
- (void)deleteVersion;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (void)deleteFlowId;
- (void)deleteResultCandidateId;
- (void)deleteTaskId;
- (void)deleteTrpId;

@end
