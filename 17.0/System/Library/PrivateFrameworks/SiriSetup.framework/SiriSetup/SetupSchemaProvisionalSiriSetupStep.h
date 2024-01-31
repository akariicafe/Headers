@class NSData;

@interface SetupSchemaProvisionalSiriSetupStep : SISchemaInstrumentationMessage {
    struct { unsigned char page : 1; } _has;
}

@property (nonatomic) int page;
@property (nonatomic) BOOL hasPage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePage;

@end
