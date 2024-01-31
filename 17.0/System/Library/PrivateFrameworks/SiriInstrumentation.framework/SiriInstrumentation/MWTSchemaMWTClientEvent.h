@class SISchemaInstrumentationMessage, MWTSchemaMWTEventMetadata, MWTSchemaMWTCheckpointReported, MWTSchemaMWTVMCPUStatsReported, NSData, MWTSchemaMWTMusicMetadataReported;

@interface MWTSchemaMWTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MWTSchemaMWTEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MWTSchemaMWTCheckpointReported *mwtCheckpointReported;
@property (nonatomic) BOOL hasMwtCheckpointReported;
@property (retain, nonatomic) MWTSchemaMWTMusicMetadataReported *mwtMusicMetadataReported;
@property (nonatomic) BOOL hasMwtMusicMetadataReported;
@property (retain, nonatomic) MWTSchemaMWTVMCPUStatsReported *mwtVMCpuStatsReported;
@property (nonatomic) BOOL hasMwtVMCpuStatsReported;
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
- (void)deleteMwtCheckpointReported;
- (void)deleteMwtMusicMetadataReported;
- (void)deleteMwtVMCpuStatsReported;

@end
