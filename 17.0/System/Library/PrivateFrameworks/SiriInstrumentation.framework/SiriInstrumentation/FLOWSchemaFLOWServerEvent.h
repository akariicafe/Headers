@class SISchemaInstrumentationMessage, FLOWSchemaFLOWEventMetadata, NSData, FLOWSchemaFLOWStep;

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) BOOL hasFlowStep;
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
- (void)deleteEventMetadata;
- (void)deleteFlowStep;

@end
