@class READSchemaREADRequestContext, READSchemaREADClientEventMetadata, SISchemaInstrumentationMessage, NSData, READSchemaREADRequestPreprocessingContext, READSchemaREADPlaybackSessionContext;

@interface READSchemaREADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) READSchemaREADClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) READSchemaREADRequestContext *readThisRequestContext;
@property (nonatomic) BOOL hasReadThisRequestContext;
@property (retain, nonatomic) READSchemaREADRequestPreprocessingContext *readsThisRequestPreprocessingContext;
@property (nonatomic) BOOL hasReadsThisRequestPreprocessingContext;
@property (retain, nonatomic) READSchemaREADPlaybackSessionContext *playbackSessionContext;
@property (nonatomic) BOOL hasPlaybackSessionContext;
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
- (void)deletePlaybackSessionContext;
- (void)deleteReadThisRequestContext;
- (void)deleteReadsThisRequestPreprocessingContext;

@end
