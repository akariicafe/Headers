@class NSString, NSArray, NSData;

@interface USOSchemaUSOEntitySpanTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *originAppId;
@property (nonatomic) BOOL hasOriginAppId;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *originEntityId;
@property (nonatomic) BOOL hasOriginEntityId;
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
- (void)clearAlternatives;
- (unsigned long long)alternativesCount;
- (id)initWithJSON:(id)a0;
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (void)addAlternatives:(id)a0;
- (void)addProperties:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (void)deleteAlternatives;
- (void)deleteIndex;
- (void)deleteOriginAppId;
- (void)deleteOriginEntityId;
- (void)deleteProperties;

@end
