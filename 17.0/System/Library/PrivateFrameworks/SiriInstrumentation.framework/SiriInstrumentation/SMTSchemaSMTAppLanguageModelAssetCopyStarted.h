@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelAssetCopyStarted : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (copy, nonatomic) NSString *appAssetPath;
@property (nonatomic) BOOL hasAppAssetPath;
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
- (void)deleteAppAssetPath;
- (void)deleteAppBundleId;
- (void)deleteLocale;

@end
