@class NSString, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSServerEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) BOOL hasPegasusId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
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
- (void)deletePegasusId;
- (void)deleteResultCandidateId;

@end
