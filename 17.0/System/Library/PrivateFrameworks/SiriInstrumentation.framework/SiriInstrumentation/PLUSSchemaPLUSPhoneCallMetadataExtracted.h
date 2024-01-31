@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSPhoneCallMetadataExtracted : SISchemaInstrumentationMessage {
    struct { unsigned char hasSiriResolvedContact : 1; unsigned char hasSiriInitiatedCall : 1; unsigned char hasUserMadeFollowupCallWithinDetectionWindow : 1; unsigned char hasUserMadeFollowupCallWithinEvaluationWindow : 1; unsigned char siriAndFollowupContactComparison : 1; unsigned char siriCallDuration : 1; unsigned char siriCallTimeToHangup : 1; unsigned char userTimeToFollowup : 1; unsigned char isSameCallRouteForSiriAndFollowup : 1; unsigned char isSameCallCapabilityForFollowup : 1; unsigned char followupNameSimilarity : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (nonatomic) BOOL hasSiriResolvedContact;
@property (nonatomic) BOOL hasHasSiriResolvedContact;
@property (nonatomic) BOOL hasSiriInitiatedCall;
@property (nonatomic) BOOL hasHasSiriInitiatedCall;
@property (nonatomic) BOOL hasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) BOOL hasHasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) BOOL hasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) BOOL hasHasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) int siriAndFollowupContactComparison;
@property (nonatomic) BOOL hasSiriAndFollowupContactComparison;
@property (nonatomic) int siriCallDuration;
@property (nonatomic) BOOL hasSiriCallDuration;
@property (nonatomic) int siriCallTimeToHangup;
@property (nonatomic) BOOL hasSiriCallTimeToHangup;
@property (nonatomic) int userTimeToFollowup;
@property (nonatomic) BOOL hasUserTimeToFollowup;
@property (nonatomic) BOOL isSameCallRouteForSiriAndFollowup;
@property (nonatomic) BOOL hasIsSameCallRouteForSiriAndFollowup;
@property (nonatomic) BOOL isSameCallCapabilityForFollowup;
@property (nonatomic) BOOL hasIsSameCallCapabilityForFollowup;
@property (nonatomic) int followupNameSimilarity;
@property (nonatomic) BOOL hasFollowupNameSimilarity;
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
- (void)deleteFollowupNameSimilarity;
- (void)deleteHasSiriInitiatedCall;
- (void)deleteHasSiriResolvedContact;
- (void)deleteHasUserMadeFollowupCallWithinDetectionWindow;
- (void)deleteHasUserMadeFollowupCallWithinEvaluationWindow;
- (void)deleteIsSameCallCapabilityForFollowup;
- (void)deleteIsSameCallRouteForSiriAndFollowup;
- (void)deleteOriginalPlusId;
- (void)deleteSiriAndFollowupContactComparison;
- (void)deleteSiriCallDuration;
- (void)deleteSiriCallTimeToHangup;
- (void)deleteUserTimeToFollowup;

@end
