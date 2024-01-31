@class NSArray, NSData;

@interface EXPSiriSchemaEXPRolloutChangeSnapshot : SISchemaInstrumentationMessage {
    struct { unsigned char trialRolloutUpdateReceivedAtTimestampInMs : 1; } _has;
}

@property (nonatomic) unsigned long long trialRolloutUpdateReceivedAtTimestampInMs;
@property (nonatomic) BOOL hasTrialRolloutUpdateReceivedAtTimestampInMs;
@property (copy, nonatomic) NSArray *rollouts;
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
- (void)addRollouts:(id)a0;
- (void)clearRollouts;
- (void)deleteRollouts;
- (void)deleteTrialRolloutUpdateReceivedAtTimestampInMs;
- (id)rolloutsAtIndex:(unsigned long long)a0;
- (unsigned long long)rolloutsCount;

@end
