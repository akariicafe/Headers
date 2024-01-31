@class NSData;

@interface ORCHSchemaORCHASRCallFailed : SISchemaInstrumentationMessage {
    struct { unsigned char error : 1; } _has;
}

@property (nonatomic) int error;
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteError;

@end
