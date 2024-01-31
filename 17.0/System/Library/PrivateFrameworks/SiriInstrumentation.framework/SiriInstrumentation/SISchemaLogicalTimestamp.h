@class NSData, SISchemaUUID;

@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage {
    struct { unsigned char timestampInNanoseconds : 1; } _has;
}

@property (nonatomic) long long timestampInNanoseconds;
@property (nonatomic) BOOL hasTimestampInNanoseconds;
@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClockIdentifier;
- (void)deleteTimestampInNanoseconds;

@end
