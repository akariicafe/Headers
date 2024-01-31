@class NSString, NSArray, NSData;

@interface NLXSchemaSSUBackgroundUpdateAppInfo : SISchemaInstrumentationMessage {
    struct { unsigned char numCacheFilesRemoved : 1; } _has;
}

@property (copy, nonatomic) NSString *appBundleIdSaltedHash;
@property (nonatomic) BOOL hasAppBundleIdSaltedHash;
@property (nonatomic) unsigned int numCacheFilesRemoved;
@property (nonatomic) BOOL hasNumCacheFilesRemoved;
@property (copy, nonatomic) NSArray *categoryInfos;
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
- (void)addCategoryInfos:(id)a0;
- (id)categoryInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryInfosCount;
- (void)clearCategoryInfos;
- (void)deleteAppBundleIdSaltedHash;
- (void)deleteCategoryInfos;
- (void)deleteNumCacheFilesRemoved;

@end
