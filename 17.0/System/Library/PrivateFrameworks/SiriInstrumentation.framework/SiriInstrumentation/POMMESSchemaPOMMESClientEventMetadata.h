@class NSString, NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char originProcess : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesId;
@property (nonatomic) BOOL hasPommesId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (nonatomic) int originProcess;
@property (nonatomic) BOOL hasOriginProcess;
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
- (void)deleteRequestId;
- (void)deleteOriginProcess;
- (void)deletePommesId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;

@end
