@class NSData;

@interface SISchemaISOLocale : SISchemaInstrumentationMessage {
    struct { unsigned char languageCode : 1; unsigned char countryCode : 1; } _has;
}

@property (nonatomic) int languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) int countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCountryCode;
- (void)deleteLanguageCode;

@end
