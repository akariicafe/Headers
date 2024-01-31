@class NSData;

@interface HALSchemaHALTimerContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceTimerFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceTimerFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceTimerFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceTimerFiredInSeconds;

@end
