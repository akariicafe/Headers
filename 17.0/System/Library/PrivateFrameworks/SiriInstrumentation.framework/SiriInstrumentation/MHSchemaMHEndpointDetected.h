@class NSData, MHSchemaMHStatisticDistributionInfo, MHSchemaMHEndpointFeaturesAtEndpoint, SISchemaVersion, MHSchemaMHEndpointerTimeoutMetadata, SISchemaUUID;

@interface MHSchemaMHEndpointDetected : SISchemaInstrumentationMessage {
    struct { unsigned char endpointerType : 1; unsigned char endpointAudioDurationInNs : 1; unsigned char firstBufferTimeInNs : 1; unsigned char endpointedBufferTimeInNs : 1; unsigned char endpointerDecisionLagInNs : 1; unsigned char extraDelayInNs : 1; unsigned char derivedBufferTimeFromHistoricalAudio : 1; unsigned char endpointerThreshold : 1; unsigned char endpointerScore : 1; unsigned char audioSkippedDurationInNs : 1; unsigned char endpointResetPositionInNs : 1; unsigned char trpDetectionType : 1; } _has;
}

@property (nonatomic) int endpointerType;
@property (nonatomic) BOOL hasEndpointerType;
@property (nonatomic) unsigned long long endpointAudioDurationInNs;
@property (nonatomic) BOOL hasEndpointAudioDurationInNs;
@property (nonatomic) unsigned long long firstBufferTimeInNs;
@property (nonatomic) BOOL hasFirstBufferTimeInNs;
@property (nonatomic) unsigned long long endpointedBufferTimeInNs;
@property (nonatomic) BOOL hasEndpointedBufferTimeInNs;
@property (retain, nonatomic) MHSchemaMHEndpointFeaturesAtEndpoint *endpointFeaturesAtEndpoint;
@property (nonatomic) BOOL hasEndpointFeaturesAtEndpoint;
@property (nonatomic) unsigned long long endpointerDecisionLagInNs;
@property (nonatomic) BOOL hasEndpointerDecisionLagInNs;
@property (nonatomic) unsigned long long extraDelayInNs;
@property (nonatomic) BOOL hasExtraDelayInNs;
@property (retain, nonatomic) SISchemaVersion *endpointModelConfigVersion;
@property (nonatomic) BOOL hasEndpointModelConfigVersion;
@property (nonatomic) BOOL derivedBufferTimeFromHistoricalAudio;
@property (nonatomic) BOOL hasDerivedBufferTimeFromHistoricalAudio;
@property (nonatomic) float endpointerThreshold;
@property (nonatomic) BOOL hasEndpointerThreshold;
@property (nonatomic) float endpointerScore;
@property (nonatomic) BOOL hasEndpointerScore;
@property (nonatomic) unsigned long long audioSkippedDurationInNs;
@property (nonatomic) BOOL hasAudioSkippedDurationInNs;
@property (nonatomic) unsigned long long endpointResetPositionInNs;
@property (nonatomic) BOOL hasEndpointResetPositionInNs;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *asrFeatureLatencyDistribution;
@property (nonatomic) BOOL hasAsrFeatureLatencyDistribution;
@property (retain, nonatomic) MHSchemaMHEndpointerTimeoutMetadata *timeoutMetadata;
@property (nonatomic) BOOL hasTimeoutMetadata;
@property (nonatomic) int trpDetectionType;
@property (nonatomic) BOOL hasTrpDetectionType;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointAudioDurationInNs;
- (void)deleteEndpointerDecisionLagInNs;
- (void)deleteEndpointResetPositionInNs;
- (void)deleteAsrFeatureLatencyDistribution;
- (void)deleteAudioSkippedDurationInNs;
- (void)deleteDerivedBufferTimeFromHistoricalAudio;
- (void)deleteEndpointFeaturesAtEndpoint;
- (void)deleteEndpointModelConfigVersion;
- (void)deleteEndpointedBufferTimeInNs;
- (void)deleteEndpointerScore;
- (void)deleteEndpointerThreshold;
- (void)deleteEndpointerType;
- (void)deleteExtraDelayInNs;
- (void)deleteFirstBufferTimeInNs;
- (void)deleteTimeoutMetadata;
- (void)deleteTrpDetectionType;
- (void)deleteTrpId;

@end
