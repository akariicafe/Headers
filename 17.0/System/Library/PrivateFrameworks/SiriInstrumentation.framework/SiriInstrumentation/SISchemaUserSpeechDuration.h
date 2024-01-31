@class NSString, NSData;

@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage {
    struct { unsigned char durationMs : 1; } _has;
}

@property (nonatomic) long long durationMs;
@property (nonatomic) BOOL hasDurationMs;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDurationMs;
- (void)deleteResultCandidateId;

@end
