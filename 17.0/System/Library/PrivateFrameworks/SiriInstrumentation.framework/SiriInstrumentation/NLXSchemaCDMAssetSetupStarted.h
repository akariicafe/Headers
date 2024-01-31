@class NSArray, NSData;

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *services;
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
- (unsigned long long)servicesCount;
- (void)addServices:(int)a0;
- (void)clearServices;
- (void)deleteServices;
- (int)servicesAtIndex:(unsigned long long)a0;

@end
