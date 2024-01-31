@class NSData, POMMESSchemaPOMMESProfileSliceResolutionRequestFailed, SISchemaUUID, POMMESSchemaPOMMESProfileSliceResolutionRequestStarted, POMMESSchemaPOMMESProfileSliceResolutionRequestEnded;

@interface POMMESSchemaPOMMESProfileSliceResolutionRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
