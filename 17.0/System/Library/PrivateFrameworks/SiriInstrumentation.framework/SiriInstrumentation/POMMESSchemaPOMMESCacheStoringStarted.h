@class NSString, NSData, POMMESSchemaPOMMESCacheEntry;

@interface POMMESSchemaPOMMESCacheStoringStarted : SISchemaInstrumentationMessage {
    struct { unsigned char resultSizeInBytes : 1; unsigned char timeToLiveInSeconds : 1; } _has;
}

@property (retain, nonatomic) POMMESSchemaPOMMESCacheEntry *entry;
@property (nonatomic) BOOL hasEntry;
@property (copy, nonatomic) NSString *resultDomain;
@property (nonatomic) BOOL hasResultDomain;
@property (nonatomic) unsigned int resultSizeInBytes;
@property (nonatomic) BOOL hasResultSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;
@property (nonatomic) BOOL hasTimeToLiveInSeconds;
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
- (void)deleteEntry;
- (void)deleteResultDomain;
- (void)deleteResultSizeInBytes;
- (void)deleteTimeToLiveInSeconds;

@end
