@class MTSchemaMTASRStateUpdated, NSData, MTSchemaMTFrameworkRequestResponseReceived, SISchemaInstrumentationMessage, MTSchemaMTLocalePairResolved, MTSchemaMTAppNextButtonTappedTier1, MTSchemaMTAppTimedOutTier1, MTSchemaMTInvocationContext, MTSchemaMTBatchRequestContext, MTSchemaMTClientEventMetadata, MTSchemaMTAppBackgroundedTier1, MTSchemaMTAppTextBoxDismissedTier1, MTSchemaMTInvocationStartedTier1, MTSchemaMTFrameworkRequestSent;

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic) BOOL hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic) BOOL hasInvocationContext;
@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic) BOOL hasAsrStateUpdated;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic) BOOL hasLocalePairResolved;
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic) BOOL hasInvocationStartedTier1;
@property (retain, nonatomic) MTSchemaMTAppNextButtonTappedTier1 *appNextButtonTapped;
@property (nonatomic) BOOL hasAppNextButtonTapped;
@property (retain, nonatomic) MTSchemaMTAppTextBoxDismissedTier1 *appTextBoxDismissed;
@property (nonatomic) BOOL hasAppTextBoxDismissed;
@property (retain, nonatomic) MTSchemaMTAppTimedOutTier1 *appTimedOut;
@property (nonatomic) BOOL hasAppTimedOut;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestSent *frameworkRequestSent;
@property (nonatomic) BOOL hasFrameworkRequestSent;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestResponseReceived *frameworkRequestResponseReceived;
@property (nonatomic) BOOL hasFrameworkRequestResponseReceived;
@property (retain, nonatomic) MTSchemaMTAppBackgroundedTier1 *appBackgrounded;
@property (nonatomic) BOOL hasAppBackgrounded;
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
- (int)clockIsolationLevel;
- (id)getComponentId;
- (void)deleteAppBackgrounded;
- (void)deleteAppNextButtonTapped;
- (void)deleteAppTextBoxDismissed;
- (void)deleteAppTimedOut;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFrameworkRequestResponseReceived;
- (void)deleteFrameworkRequestSent;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLocalePairResolved;

@end
