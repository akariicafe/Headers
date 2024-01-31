@class SUTSchemaTestExecutionMetadata, SUTSchemaTestExecutionBegin, SISchemaInstrumentationMessage, SUTSchemaTestExecutionEnd, SUTSchemaTestOutcomeRecorded, SUTSchemaTestAssociatedSchemaIdentifier, NSData;

@interface SUTSchemaTestExecutionEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUTSchemaTestExecutionMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SUTSchemaTestExecutionBegin *testExecutionBegin;
@property (nonatomic) BOOL hasTestExecutionBegin;
@property (retain, nonatomic) SUTSchemaTestExecutionEnd *testExecutionEnd;
@property (nonatomic) BOOL hasTestExecutionEnd;
@property (retain, nonatomic) SUTSchemaTestAssociatedSchemaIdentifier *testAssociatedSchemaIdentifier;
@property (nonatomic) BOOL hasTestAssociatedSchemaIdentifier;
@property (retain, nonatomic) SUTSchemaTestOutcomeRecorded *testOutcomeRecorded;
@property (nonatomic) BOOL hasTestOutcomeRecorded;
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
- (void)deleteMetadata;
- (void)deleteTestAssociatedSchemaIdentifier;
- (void)deleteTestExecutionBegin;
- (void)deleteTestExecutionEnd;
- (void)deleteTestOutcomeRecorded;

@end
