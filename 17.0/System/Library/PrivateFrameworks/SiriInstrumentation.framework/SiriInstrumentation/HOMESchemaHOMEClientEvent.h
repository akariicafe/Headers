@class SISchemaInstrumentationMessage, HOMESchemaHOMEAssistantInfoReported, NSData, HOMESchemaHOMEClientEventMetadata, HOMESchemaHOMEAssistantDeviceBirthday;

@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported;
@property (nonatomic) BOOL hasAssistantInfoReported;
@property (retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday;
@property (nonatomic) BOOL hasAssistantDeviceBirthday;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

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
- (void)deleteAssistantDeviceBirthday;
- (void)deleteAssistantInfoReported;
- (void)deleteEventMetadata;

@end
