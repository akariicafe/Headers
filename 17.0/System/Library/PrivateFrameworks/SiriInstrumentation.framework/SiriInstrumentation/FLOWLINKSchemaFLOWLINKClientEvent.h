@class FLOWSchemaFLOWEventMetadata, NSData, FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed, SISchemaInstrumentationMessage, FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationContext, FLOWLINKSchemaFLOWLINKEntityDisambiguationContext, FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext, FLOWLINKSchemaFLOWLINKActionContext, FLOWLINKSchemaFLOWLINKActionConversionContext, FLOWLINKSchemaFLOWLINKActionParametersUpdated, FLOWLINKSchemaFLOWLINKActionExecutionContext, FLOWLINKSchemaFLOWLINKActionConfirmationContext, FLOWLINKSchemaFLOWLINKActionPromptForValueContext, FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext, FLOWLINKSchemaFLOWLINKActionTier1, FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed;

@interface FLOWLINKSchemaFLOWLINKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionContext *linkActionContext;
@property (nonatomic) BOOL hasLinkActionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKEntityDisambiguationContext *entityDisambiguationContext;
@property (nonatomic) BOOL hasEntityDisambiguationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionContext *actionConversionContext;
@property (nonatomic) BOOL hasActionConversionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionExecutionContext *actionExecutionContext;
@property (nonatomic) BOOL hasActionExecutionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionPromptForValueContext *actionPromptForValueContext;
@property (nonatomic) BOOL hasActionPromptForValueContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext *actionParameterDisambiguationContext;
@property (nonatomic) BOOL hasActionParameterDisambiguationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext *actionParameterConfirmationContext;
@property (nonatomic) BOOL hasActionParameterConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConfirmationContext *actionConfirmationContext;
@property (nonatomic) BOOL hasActionConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed *autoShortcutTemplateUsed;
@property (nonatomic) BOOL hasAutoShortcutTemplateUsed;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionTier1 *linkActionTier1;
@property (nonatomic) BOOL hasLinkActionTier1;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParametersUpdated *actionParameterUpdated;
@property (nonatomic) BOOL hasActionParameterUpdated;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationContext *appShortcutFirstRunConfirmationContext;
@property (nonatomic) BOOL hasAppShortcutFirstRunConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed *appShortcutGeneralizedExecutionUsed;
@property (nonatomic) BOOL hasAppShortcutGeneralizedExecutionUsed;
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
- (void)deleteActionConfirmationContext;
- (void)deleteActionConversionContext;
- (void)deleteActionExecutionContext;
- (void)deleteActionParameterConfirmationContext;
- (void)deleteActionParameterDisambiguationContext;
- (void)deleteActionParameterUpdated;
- (void)deleteActionPromptForValueContext;
- (void)deleteAppShortcutFirstRunConfirmationContext;
- (void)deleteAppShortcutGeneralizedExecutionUsed;
- (void)deleteAutoShortcutTemplateUsed;
- (void)deleteEntityDisambiguationContext;
- (void)deleteEventMetadata;
- (void)deleteLinkActionContext;
- (void)deleteLinkActionTier1;

@end
