@class NSArray, USOSchemaUSONodeDataTier1, NSData;

@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSONodeDataTier1 *linkedUsoNodeData;
@property (nonatomic) BOOL hasLinkedUsoNodeData;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoEntitySpans;
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
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)addLinkedUsoEntitySpans:(id)a0;
- (void)clearLinkedUsoEntitySpans;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoEntitySpans;
- (void)deleteLinkedUsoNodeData;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;
- (id)linkedUsoEntitySpansAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoEntitySpansCount;

@end
