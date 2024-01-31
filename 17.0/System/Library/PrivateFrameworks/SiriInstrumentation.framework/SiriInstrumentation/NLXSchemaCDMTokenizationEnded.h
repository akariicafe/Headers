@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char inputType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *tokenChains;
@property (nonatomic) int inputType;
@property (nonatomic) BOOL hasInputType;
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
- (void)addTokenChains:(id)a0;
- (void)deleteContextId;
- (void)deleteInputType;
- (void)clearTokenChains;
- (void)deleteTokenChains;
- (id)tokenChainsAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenChainsCount;

@end
