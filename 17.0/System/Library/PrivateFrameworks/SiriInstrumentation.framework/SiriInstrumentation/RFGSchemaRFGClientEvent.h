@class RFSchemaRFGClientEventMetadata, SISchemaInstrumentationMessage, RFSchemaRFGVisualResponseShownTier1, NSData, RFSchemaRFGVisualResponseShownLink;

@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1;
@property (nonatomic) BOOL hasVisualResponseShownTier1;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink;
@property (nonatomic) BOOL hasVisualResponseShownLink;
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
- (void)deleteEventMetadata;
- (void)deleteVisualResponseShownLink;
- (void)deleteVisualResponseShownTier1;

@end
