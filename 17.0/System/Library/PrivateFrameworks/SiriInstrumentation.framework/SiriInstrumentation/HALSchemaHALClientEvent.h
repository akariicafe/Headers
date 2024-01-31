@class NSData, SISchemaInstrumentationMessage, HALSchemaHALForceFetchContext, HALSchemaHALClientEventMetadata, HALSchemaHALCompanionDeviceDiscoveryContext, HALSchemaHALCompanionDeviceCommunicationContext, HALSchemaHALCrossDeviceCommandExecutionContext, HALSchemaHALLocalFetchContext, HALSchemaHALContextCollectorFetchContext;

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext;
@property (nonatomic) BOOL hasCrossDeviceCommandContext;
@property (retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext;
@property (nonatomic) BOOL hasLocalFetchContext;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext;
@property (nonatomic) BOOL hasContextCollectorFetchContext;
@property (retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext;
@property (nonatomic) BOOL hasForceFetchContext;
@property (retain, nonatomic) HALSchemaHALCompanionDeviceDiscoveryContext *companionDeviceDiscoveryContext;
@property (nonatomic) BOOL hasCompanionDeviceDiscoveryContext;
@property (retain, nonatomic) HALSchemaHALCompanionDeviceCommunicationContext *companionDeviceCommunicationContext;
@property (nonatomic) BOOL hasCompanionDeviceCommunicationContext;
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
- (void)deleteCrossDeviceCommandContext;
- (void)deleteCompanionDeviceCommunicationContext;
- (void)deleteCompanionDeviceDiscoveryContext;
- (void)deleteContextCollectorFetchContext;
- (void)deleteEventMetadata;
- (void)deleteForceFetchContext;
- (void)deleteLocalFetchContext;

@end
