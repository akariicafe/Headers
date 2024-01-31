@class NSData;

@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char projectIntent : 1; unsigned char numCandidateApps : 1; unsigned char isDecisionCorrect : 1; unsigned char modelVersion : 1; unsigned char isModelDisambiguation : 1; unsigned char isModelConfirmation : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) int projectIntent;
@property (nonatomic) BOOL hasProjectIntent;
@property (nonatomic) int numCandidateApps;
@property (nonatomic) BOOL hasNumCandidateApps;
@property (nonatomic) BOOL isDecisionCorrect;
@property (nonatomic) BOOL hasIsDecisionCorrect;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL isModelDisambiguation;
@property (nonatomic) BOOL hasIsModelDisambiguation;
@property (nonatomic) BOOL isModelConfirmation;
@property (nonatomic) BOOL hasIsModelConfirmation;
@property (nonatomic) int userPersona;
@property (nonatomic) BOOL hasUserPersona;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDecisionCorrect;
- (void)deleteIsModelConfirmation;
- (void)deleteIsModelDisambiguation;
- (void)deleteModelVersion;
- (void)deleteNumCandidateApps;
- (void)deleteProjectIntent;
- (void)deleteUserPersona;

@end
