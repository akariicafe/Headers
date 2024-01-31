@class NSString, NSData;

@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL hasUserAgent;
@property (copy, nonatomic) NSString *aceHost;
@property (nonatomic) BOOL hasAceHost;
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
- (void)deleteUserAgent;
- (void)deleteAceHost;

@end
