@class MTSchemaMTLocalePair, NSData, SISchemaUUID;

@interface MTSchemaMTAppInvocationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char displayMode : 1; unsigned char isGenderAlternativeEnabled : 1; unsigned char tabName : 1; } _has;
}

@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasDisplayMode;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) BOOL hasLocalePair;
@property (nonatomic) BOOL isGenderAlternativeEnabled;
@property (nonatomic) BOOL hasIsGenderAlternativeEnabled;
@property (nonatomic) int tabName;
@property (nonatomic) BOOL hasTabName;
@property (retain, nonatomic) SISchemaUUID *tabSessionId;
@property (nonatomic) BOOL hasTabSessionId;
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
- (void)deleteDisplayMode;
- (void)deleteIsGenderAlternativeEnabled;
- (void)deleteLocalePair;
- (void)deleteTabName;
- (void)deleteTabSessionId;

@end
