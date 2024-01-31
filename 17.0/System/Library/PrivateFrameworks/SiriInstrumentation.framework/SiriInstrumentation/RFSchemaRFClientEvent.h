@class SISchemaInstrumentationMessage, RFSchemaRFComponentShown, RFSchemaRFClientEventMetadata, RFSchemaRFPatternExecuted, NSData, RFSchemaRFInteractionPerformed, RFSchemaRFSnippetRenderingContext;

@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFPatternExecuted *patternExecuted;
@property (nonatomic) BOOL hasPatternExecuted;
@property (retain, nonatomic) RFSchemaRFInteractionPerformed *interactionPerformed;
@property (nonatomic) BOOL hasInteractionPerformed;
@property (retain, nonatomic) RFSchemaRFComponentShown *componentShown;
@property (nonatomic) BOOL hasComponentShown;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingContext *snippetRenderingContext;
@property (nonatomic) BOOL hasSnippetRenderingContext;
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
- (void)deleteComponentShown;
- (void)deleteEventMetadata;
- (void)deleteInteractionPerformed;
- (void)deletePatternExecuted;
- (void)deleteSnippetRenderingContext;

@end
