@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForPhoneCall : 1; unsigned char appContactAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appContactAffinityScoreForPhoneCallReceived : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppContactAffinityScoreForPhoneCall;
- (void)deleteAppContactAffinityScoreForPhoneCallReceived;
- (void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;

@end
