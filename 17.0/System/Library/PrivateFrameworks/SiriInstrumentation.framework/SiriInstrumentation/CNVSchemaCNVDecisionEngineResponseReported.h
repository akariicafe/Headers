@class NSString, NSData, SISchemaUUID;

@interface CNVSchemaCNVDecisionEngineResponseReported : SISchemaInstrumentationMessage {
    struct { unsigned char isExistingFlowSelected : 1; unsigned char isInterpretableAsUniversalCommand : 1; } _has;
}

@property (copy, nonatomic) NSString *flowHandlerId;
@property (nonatomic) BOOL hasFlowHandlerId;
@property (retain, nonatomic) SISchemaUUID *parseHypothesisId;
@property (nonatomic) BOOL hasParseHypothesisId;
@property (nonatomic) BOOL isExistingFlowSelected;
@property (nonatomic) BOOL hasIsExistingFlowSelected;
@property (nonatomic) BOOL isInterpretableAsUniversalCommand;
@property (nonatomic) BOOL hasIsInterpretableAsUniversalCommand;
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
- (void)deleteFlowHandlerId;
- (void)deleteIsExistingFlowSelected;
- (void)deleteIsInterpretableAsUniversalCommand;
- (void)deleteParseHypothesisId;

@end
