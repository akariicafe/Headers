@class NSData;

@interface UAFSchemaUAFMobileAssetDownloadErrorCodeFrequency : SISchemaInstrumentationMessage {
    struct { unsigned char mobileAssetDownloadErrorCode : 1; unsigned char timesOccurred : 1; } _has;
}

@property (nonatomic) unsigned int mobileAssetDownloadErrorCode;
@property (nonatomic) BOOL hasMobileAssetDownloadErrorCode;
@property (nonatomic) unsigned int timesOccurred;
@property (nonatomic) BOOL hasTimesOccurred;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMobileAssetDownloadErrorCode;
- (void)deleteTimesOccurred;

@end
