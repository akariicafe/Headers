@class NSData, USOSchemaUSOGraphTier1;

@interface RRSchemaProvisionalRRUsoGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1;
@property (nonatomic) BOOL hasUsoGraphTier1;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
