@class SISchemaInstrumentationMessage, SMTSchemaSMTAppLanguageModelBuildContext, SMTSchemaSMTAppLanguageModelProfileRebuildContext, SMTSchemaSMTClientEventMetadata, NSData, SMTSchemaSMTAppLanguageModelAssetCopyContext;

@interface SMTSchemaSMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SMTSchemaSMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyContext *appLanguageModelAssetCopyContext;
@property (nonatomic) BOOL hasAppLanguageModelAssetCopyContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelBuildContext *appLanguageModelBuildContext;
@property (nonatomic) BOOL hasAppLanguageModelBuildContext;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelProfileRebuildContext *appLanguageModelProfileRebuildContext;
@property (nonatomic) BOOL hasAppLanguageModelProfileRebuildContext;
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
- (void)deleteAppLanguageModelAssetCopyContext;
- (void)deleteAppLanguageModelBuildContext;
- (void)deleteAppLanguageModelProfileRebuildContext;
- (void)deleteEventMetadata;

@end
