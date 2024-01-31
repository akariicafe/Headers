@class NSData, SISchemaUUID;

@interface SISchemaRequestLinkInfo : SISchemaInstrumentationMessage {
    struct { unsigned char component : 1; } _has;
}

@property (nonatomic) int component;
@property (nonatomic) BOOL hasComponent;
@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
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
- (void)deleteComponent;
- (void)deleteUuid;

@end
