@class NSData;

@interface POMMESSchemaPOMMESResourceDownloadEnded : SISchemaInstrumentationMessage {
    struct { unsigned char resourceDownloadSizeInBytes : 1; } _has;
}

@property (nonatomic) unsigned int resourceDownloadSizeInBytes;
@property (nonatomic) BOOL hasResourceDownloadSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResourceDownloadSizeInBytes;

@end
