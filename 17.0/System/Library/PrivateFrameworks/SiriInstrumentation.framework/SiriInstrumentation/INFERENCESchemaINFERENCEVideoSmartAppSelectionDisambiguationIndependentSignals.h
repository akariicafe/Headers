@class NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationAppsOrder : 1; unsigned char disambiguationReasons : 1; unsigned char modelVersion : 1; unsigned char numDisambiguationApps : 1; unsigned char trialDeploymentId : 1; } _has;
}

@property (nonatomic) int disambiguationAppsOrder;
@property (nonatomic) BOOL hasDisambiguationAppsOrder;
@property (nonatomic) int disambiguationReasons;
@property (nonatomic) BOOL hasDisambiguationReasons;
@property (nonatomic) long long modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) int numDisambiguationApps;
@property (nonatomic) BOOL hasNumDisambiguationApps;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) BOOL hasTrialTreatmentId;
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
- (void)deleteDisambiguationAppsOrder;
- (void)deleteDisambiguationReasons;
- (void)deleteModelVersion;
- (void)deleteNumDisambiguationApps;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialTreatmentId;

@end
