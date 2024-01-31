@class NSMutableArray;

@interface CPLSuggestionRecordList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *persons;
@property (retain, nonatomic) NSMutableArray *memorys;

+ (Class)assetType;
+ (Class)personType;
+ (Class)memoryType;

- (unsigned long long)assetsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearAssets;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAsset:(id)a0;
- (unsigned long long)memorysCount;
- (unsigned long long)personsCount;
- (id)assetAtIndex:(unsigned long long)a0;
- (id)personAtIndex:(unsigned long long)a0;
- (void)addMemory:(id)a0;
- (void)addPerson:(id)a0;
- (void)clearMemorys;
- (void)clearPersons;
- (id)memoryAtIndex:(unsigned long long)a0;

@end
