@class NSData;

@interface ORCHSchemaORCHConversationContextSubmitted : SISchemaInstrumentationMessage {
    struct { unsigned char contextUpdateReceived : 1; unsigned char contextUpdateError : 1; } _has;
}

@property (nonatomic) BOOL contextUpdateReceived;
@property (nonatomic) BOOL hasContextUpdateReceived;
@property (nonatomic) BOOL contextUpdateError;
@property (nonatomic) BOOL hasContextUpdateError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContextUpdateError;
- (void)deleteContextUpdateReceived;

@end
