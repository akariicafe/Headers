@class NSString, NSData;

@interface POMMESSchemaPOMMESCacheEntry : SISchemaInstrumentationMessage {
    struct { unsigned char sizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; unsigned char origin : 1; } _has;
}

@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (nonatomic) unsigned int sizeInBytes;
@property (nonatomic) BOOL hasSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) BOOL hasTimeToLiveInSeconds;
@property (nonatomic) int origin;
@property (nonatomic) BOOL hasOrigin;
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
- (void)deleteOrigin;
- (void)deletePegasusDomain;
- (void)deleteSizeInBytes;
- (void)deleteTimeToLiveInSeconds;

@end
