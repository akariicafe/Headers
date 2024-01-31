@class NSData;

@interface SISchemaUEISiriCarCommandCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriDigitalCarKeyRequest : 1; } _has;
}

@property (nonatomic) BOOL isSiriDigitalCarKeyRequest;
@property (nonatomic) BOOL hasIsSiriDigitalCarKeyRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSiriDigitalCarKeyRequest;

@end
