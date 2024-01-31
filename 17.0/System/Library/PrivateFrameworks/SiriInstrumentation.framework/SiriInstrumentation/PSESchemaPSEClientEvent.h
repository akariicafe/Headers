@class NSData, PSESchemaPSEMessageSignalGenerated, SISchemaInstrumentationMessage, PSESchemaPSEGenericSignalGenerated, PSESchemaPSEHomeFollowupSignalGenerated, PSESchemaPSEMediaSignalGenerated, PSESchemaPSEClientEventMetadata, PSESchemaPSECallSignalGenerated;

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) BOOL hasGenericSignalGenerated;
@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic) BOOL hasCallSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic) BOOL hasMessageSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated;
@property (nonatomic) BOOL hasMediaSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEHomeFollowupSignalGenerated *homeFollowupSignalGenerated;
@property (nonatomic) BOOL hasHomeFollowupSignalGenerated;
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
- (int)clockIsolationLevel;
- (id)getComponentId;
- (void)deleteCallSignalGenerated;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteHomeFollowupSignalGenerated;
- (void)deleteMediaSignalGenerated;
- (void)deleteMessageSignalGenerated;

@end
