@class NSArray, CDASchemaCDAScoreBoosters, NSData, CDASchemaCDAParticipant;

@interface CDASchemaCDAElectionDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char version : 1; unsigned char decision : 1; unsigned char previousDecision : 1; unsigned char timeSinceLastDecisionInMs : 1; unsigned char rawGoodnessScore : 1; } _has;
}

@property (nonatomic) float version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int decision;
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) int previousDecision;
@property (nonatomic) BOOL hasPreviousDecision;
@property (retain, nonatomic) CDASchemaCDAParticipant *thisDevice;
@property (nonatomic) BOOL hasThisDevice;
@property (retain, nonatomic) CDASchemaCDAParticipant *winningDevice;
@property (nonatomic) BOOL hasWinningDevice;
@property (copy, nonatomic) NSArray *heardParticipants;
@property (nonatomic) unsigned long long timeSinceLastDecisionInMs;
@property (nonatomic) BOOL hasTimeSinceLastDecisionInMs;
@property (nonatomic) unsigned int rawGoodnessScore;
@property (nonatomic) BOOL hasRawGoodnessScore;
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *goodnessScoreBoosts;
@property (nonatomic) BOOL hasGoodnessScoreBoosts;
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
- (void)deleteVersion;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceLastDecisionInMs;
- (void)addHeardParticipants:(id)a0;
- (void)clearHeardParticipants;
- (void)deleteDecision;
- (void)deleteGoodnessScoreBoosts;
- (void)deleteHeardParticipants;
- (void)deletePreviousDecision;
- (void)deleteRawGoodnessScore;
- (void)deleteThisDevice;
- (void)deleteWinningDevice;
- (id)heardParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)heardParticipantsCount;

@end
