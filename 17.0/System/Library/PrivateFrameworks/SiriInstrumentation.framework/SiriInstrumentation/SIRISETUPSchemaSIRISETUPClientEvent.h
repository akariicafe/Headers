@class SISchemaInstrumentationMessage, SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted, SIRISETUPSchemaSIRISETUPClientEventMetadata, SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted, NSData;

@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted;
@property (nonatomic) BOOL hasEnrollmentZeroDetectionCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted;
@property (nonatomic) BOOL hasEnrollmentUtteranceCompleted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)getComponentId;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;

@end
