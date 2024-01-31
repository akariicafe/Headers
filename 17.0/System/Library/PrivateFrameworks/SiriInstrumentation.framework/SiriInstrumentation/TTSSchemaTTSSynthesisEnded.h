@class NSArray, NSData;

@interface TTSSchemaTTSSynthesisEnded : SISchemaInstrumentationMessage {
    struct { unsigned char synthesizedAudioDurationInSecond : 1; unsigned char synthesisLatencyInSecond : 1; unsigned char synthesisRealTimeFactor : 1; unsigned char promptCount : 1; } _has;
}

@property (nonatomic) float synthesizedAudioDurationInSecond;
@property (nonatomic) BOOL hasSynthesizedAudioDurationInSecond;
@property (nonatomic) float synthesisLatencyInSecond;
@property (nonatomic) BOOL hasSynthesisLatencyInSecond;
@property (nonatomic) float synthesisRealTimeFactor;
@property (nonatomic) BOOL hasSynthesisRealTimeFactor;
@property (nonatomic) unsigned int promptCount;
@property (nonatomic) BOOL hasPromptCount;
@property (copy, nonatomic) NSArray *errorCodes;
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
- (void)clearErrorCodes;
- (unsigned long long)errorCodesCount;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (void)deletePromptCount;
- (void)deleteSynthesisLatencyInSecond;
- (void)deleteSynthesisRealTimeFactor;
- (void)deleteSynthesizedAudioDurationInSecond;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
