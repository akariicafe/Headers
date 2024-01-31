@class NSData;

@interface FLOWSchemaFLOWSmsAudioContext : SISchemaInstrumentationMessage {
    struct { unsigned char messageDurationMs : 1; } _has;
}

@property (nonatomic) unsigned int messageDurationMs;
@property (nonatomic) BOOL hasMessageDurationMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessageDurationMs;

@end
