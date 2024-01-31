@class NSData;

@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    struct { unsigned char callDurationInSeconds : 1; unsigned char hasUserInitiatedFollowup : 1; unsigned char timeToEstablishInSeconds : 1; unsigned char recentCallStatus : 1; unsigned char disconnectedReason : 1; } _has;
}

@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) BOOL hasCallDurationInSeconds;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) double timeToEstablishInSeconds;
@property (nonatomic) BOOL hasTimeToEstablishInSeconds;
@property (nonatomic) int recentCallStatus;
@property (nonatomic) BOOL hasRecentCallStatus;
@property (nonatomic) int disconnectedReason;
@property (nonatomic) BOOL hasDisconnectedReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallDurationInSeconds;
- (void)deleteDisconnectedReason;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteRecentCallStatus;
- (void)deleteTimeToEstablishInSeconds;

@end
