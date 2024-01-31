@class NSString, NSData;

@interface SISchemaUUFRCasinoCardSelected : SISchemaInstrumentationMessage {
    struct { unsigned char ordinalCardSectionPosition : 1; } _has;
}

@property (copy, nonatomic) NSString *cardSectionId;
@property (nonatomic) BOOL hasCardSectionId;
@property (nonatomic) int ordinalCardSectionPosition;
@property (nonatomic) BOOL hasOrdinalCardSectionPosition;
@property (copy, nonatomic) NSString *snippetAceId;
@property (nonatomic) BOOL hasSnippetAceId;
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
- (void)deleteCardSectionId;
- (void)deleteOrdinalCardSectionPosition;
- (void)deleteSnippetAceId;

@end
