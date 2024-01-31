@class SISchemaInstrumentationMessage, DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1, DODMLSchemaDODMLClientEventMetadata, DODMLASRSchemaDODMLASRUserEditExperimentContext, DODMLASRSchemaDODMLASRAudioFileResultTier1, NSData, DODMLASRSchemaDODMLASRPersonalizationExperimentContext;

@interface DODMLSchemaDODMLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext;
@property (nonatomic) BOOL hasPersonalizationExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext;
@property (nonatomic) BOOL hasUserEditExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1;
@property (nonatomic) BOOL hasUserEditExperimentEndedTier1;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1;
@property (nonatomic) BOOL hasAudioFileResultTier1;
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
- (void)deleteUserEditExperimentContext;
- (void)deleteAudioFileResultTier1;
- (void)deleteEventMetadata;
- (void)deletePersonalizationExperimentContext;
- (void)deleteUserEditExperimentEndedTier1;

@end
