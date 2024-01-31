@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (void)deletePayload;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (Class)topLevelUnionTypeClass;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (void)deleteAnyEventType;
- (id)dictionaryRepresentation;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)unwrap;
- (id)initWithJSON:(id)a0;

@end
