@class INFERENCESchemaINFERENCEContactResolverConfig, NSString, NSArray, INFERENCESchemaINFERENCEPromptContext, INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext, NSData, INFERENCESchemaINFERENCETrialEnrollment;

@interface INFERENCESchemaINFERENCECRRTrainingSampleCollected : SISchemaInstrumentationMessage {
    struct { unsigned char resolutionState : 1; unsigned char resolutionType : 1; unsigned char isInteractionExecuted : 1; unsigned char isInteractionSuccess : 1; unsigned char interactionDurationInSecBucket : 1; unsigned char isPlusContactSuggesterEnabled : 1; unsigned char isEntityCandidateRetrievalEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *intentTypeName;
@property (nonatomic) BOOL hasIntentTypeName;
@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *resolverConfig;
@property (nonatomic) BOOL hasResolverConfig;
@property (retain, nonatomic) INFERENCESchemaINFERENCETrialEnrollment *trialEnrollment;
@property (nonatomic) BOOL hasTrialEnrollment;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) int resolutionState;
@property (nonatomic) BOOL hasResolutionState;
@property (nonatomic) int resolutionType;
@property (nonatomic) BOOL hasResolutionType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPromptContext *forcePrompt;
@property (nonatomic) BOOL hasForcePrompt;
@property (copy, nonatomic) NSArray *anonymizedContactIdentifiers;
@property (nonatomic) BOOL isInteractionExecuted;
@property (nonatomic) BOOL hasIsInteractionExecuted;
@property (nonatomic) BOOL isInteractionSuccess;
@property (nonatomic) BOOL hasIsInteractionSuccess;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) BOOL hasInteractionDurationInSecBucket;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext *interactionContext;
@property (nonatomic) BOOL hasInteractionContext;
@property (nonatomic) BOOL isPlusContactSuggesterEnabled;
@property (nonatomic) BOOL hasIsPlusContactSuggesterEnabled;
@property (nonatomic) BOOL isEntityCandidateRetrievalEnabled;
@property (nonatomic) BOOL hasIsEntityCandidateRetrievalEnabled;
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
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (unsigned long long)matchesCount;
- (void)addAnonymizedContactIdentifiers:(id)a0;
- (id)anonymizedContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedContactIdentifiersCount;
- (void)clearAnonymizedContactIdentifiers;
- (void)deleteAnonymizedContactIdentifiers;
- (void)deleteForcePrompt;
- (void)deleteIntentTypeName;
- (void)deleteInteractionContext;
- (void)deleteInteractionDurationInSecBucket;
- (void)deleteIsEntityCandidateRetrievalEnabled;
- (void)deleteIsInteractionExecuted;
- (void)deleteIsInteractionSuccess;
- (void)deleteIsPlusContactSuggesterEnabled;
- (void)deleteMatches;
- (void)deleteModelVersion;
- (void)deleteResolutionState;
- (void)deleteResolutionType;
- (void)deleteResolverConfig;
- (void)deleteTrialEnrollment;

@end
