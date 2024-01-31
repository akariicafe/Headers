@class NSData, CAMSchemaCAMAggregateFeatureValue;

@interface CAMSchemaCAMAutoSendFeaturesGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScore;
@property (nonatomic) BOOL hasUserAsrScore;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenCompleted;
@property (nonatomic) BOOL hasUserAsrScoreWhenCompleted;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenRejected;
@property (nonatomic) BOOL hasUserAsrScoreWhenRejected;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetContact;
@property (nonatomic) BOOL hasUserAsrScoreTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetApp;
@property (nonatomic) BOOL hasUserAsrScoreTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRate;
@property (nonatomic) BOOL hasUserRejectRate;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetContact;
@property (nonatomic) BOOL hasUserRejectRateTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetApp;
@property (nonatomic) BOOL hasUserRejectRateTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenSkipDecision;
@property (nonatomic) BOOL hasUserRejectRateWhenSkipDecision;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenConfirmDecision;
@property (nonatomic) BOOL hasUserRejectRateWhenConfirmDecision;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharacters;
@property (nonatomic) BOOL hasUserPayloadLengthInCharacters;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetContact;
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetApp;
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenCompleted;
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersWhenCompleted;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenRejected;
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersWhenRejected;
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
- (void)deleteUserAsrScoreWhenCompleted;
- (void)deleteUserAsrScoreTargetContact;
- (void)deleteUserAsrScore;
- (void)deleteUserAsrScoreTargetApp;
- (void)deleteUserAsrScoreWhenRejected;
- (void)deleteUserPayloadLengthInCharacters;
- (void)deleteUserPayloadLengthInCharactersTargetApp;
- (void)deleteUserPayloadLengthInCharactersTargetContact;
- (void)deleteUserPayloadLengthInCharactersWhenCompleted;
- (void)deleteUserPayloadLengthInCharactersWhenRejected;
- (void)deleteUserRejectRate;
- (void)deleteUserRejectRateTargetApp;
- (void)deleteUserRejectRateTargetContact;
- (void)deleteUserRejectRateWhenConfirmDecision;
- (void)deleteUserRejectRateWhenSkipDecision;

@end
