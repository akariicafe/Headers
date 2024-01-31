@class SISchemaInstrumentationMessage, TTMSchemaTTMClientEventMetadata, TTMSchemaTTMRequestContext, TTMSchemaTTMNeuralCombinerRequestContext, NSData, TTMSchemaTTMOverrideRequestContext;

@interface TTMSchemaTTMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) TTMSchemaTTMClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) TTMSchemaTTMRequestContext *ttmRequestContext;
@property (nonatomic) BOOL hasTtmRequestContext;
@property (retain, nonatomic) TTMSchemaTTMNeuralCombinerRequestContext *ttmNeuralCombinerRequestContext;
@property (nonatomic) BOOL hasTtmNeuralCombinerRequestContext;
@property (retain, nonatomic) TTMSchemaTTMOverrideRequestContext *ttmOverrideRequestContext;
@property (nonatomic) BOOL hasTtmOverrideRequestContext;
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
- (void)deleteTtmOverrideRequestContext;
- (void)deleteEventMetadata;
- (void)deleteTtmNeuralCombinerRequestContext;
- (void)deleteTtmRequestContext;

@end
