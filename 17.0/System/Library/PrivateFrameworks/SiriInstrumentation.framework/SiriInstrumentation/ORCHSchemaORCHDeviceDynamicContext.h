@class NSData;

@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { unsigned char thermalState : 1; unsigned char motionActivity : 1; unsigned char timeSinceAssistantDaemonStartedInMs : 1; } _has;
}

@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (nonatomic) int motionActivity;
@property (nonatomic) BOOL hasMotionActivity;
@property (nonatomic) unsigned long long timeSinceAssistantDaemonStartedInMs;
@property (nonatomic) BOOL hasTimeSinceAssistantDaemonStartedInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMotionActivity;
- (void)deleteThermalState;
- (void)deleteTimeSinceAssistantDaemonStartedInMs;

@end
