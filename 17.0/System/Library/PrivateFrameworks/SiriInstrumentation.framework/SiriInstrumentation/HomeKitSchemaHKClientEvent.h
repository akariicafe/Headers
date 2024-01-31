@class HomeKitSchemaHomeKitEventMetadata, HomeKitSchemaHKAccessoryOperationReported, SISchemaInstrumentationMessage, NSData;

@interface HomeKitSchemaHKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HomeKitSchemaHomeKitEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HomeKitSchemaHKAccessoryOperationReported *homeKitAccessoryOperationReported;
@property (nonatomic) BOOL hasHomeKitAccessoryOperationReported;
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
- (void)deleteHomeKitAccessoryOperationReported;

@end
