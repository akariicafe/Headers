@class NSString, NSData;

@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *usageName;
@property (nonatomic) BOOL hasUsageName;
@property (copy, nonatomic) NSString *usageValue;
@property (nonatomic) BOOL hasUsageValue;
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
- (void)deleteUsageName;
- (void)deleteUsageValue;

@end
