@class NSString, NSData;

@interface UAFSchemaUAFAssetUsageAlias : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aliasName;
@property (nonatomic) BOOL hasAliasName;
@property (copy, nonatomic) NSString *aliasValue;
@property (nonatomic) BOOL hasAliasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAliasName;
- (void)deleteAliasValue;

@end
