@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForPhoneCall : 1; unsigned char appAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appAffinityScoreForPhoneCallReceived : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCall;
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppAffinityScoreForPhoneCall;
- (void)deleteAppAffinityScoreForPhoneCallReceived;
- (void)deleteAppAffinityScoreForPhoneCallUsingSiri;

@end
