@class NSData;

@interface PLUSSchemaPLUSMediaConfiguredState : SISchemaInstrumentationMessage {
    struct { unsigned char shadowLogging : 1; } _has;
}

@property (nonatomic) BOOL shadowLogging;
@property (nonatomic) BOOL hasShadowLogging;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteShadowLogging;

@end
