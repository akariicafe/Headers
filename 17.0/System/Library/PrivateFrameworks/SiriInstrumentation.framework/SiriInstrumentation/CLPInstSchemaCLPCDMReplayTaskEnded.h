@class NSData;

@interface CLPInstSchemaCLPCDMReplayTaskEnded : SISchemaInstrumentationMessage {
    struct { unsigned char replayedSampleCount : 1; } _has;
}

@property (nonatomic) unsigned int replayedSampleCount;
@property (nonatomic) BOOL hasReplayedSampleCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReplayedSampleCount;

@end
