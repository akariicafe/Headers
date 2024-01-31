@class NSData, SISchemaUUID;

@interface TTMSchemaTTMTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char decision : 1; unsigned char decisionSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (nonatomic) int decision;
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) int decisionSource;
@property (nonatomic) BOOL hasDecisionSource;
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
- (void)deleteDecision;
- (void)deleteDecisionSource;
- (void)deleteTcuId;

@end
