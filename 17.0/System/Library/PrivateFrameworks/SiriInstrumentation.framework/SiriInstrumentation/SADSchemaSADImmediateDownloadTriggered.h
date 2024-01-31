@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char existingAssets : 1; unsigned char retryCount : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL existingAssets;
@property (nonatomic) BOOL hasExistingAssets;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExistingAssets;
- (void)deleteLocale;
- (void)deleteRetryCount;

@end
