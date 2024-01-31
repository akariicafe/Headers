@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapServicesType;
+ (Class)hapCategoriesType;
+ (Class)hapCharacteristicsType;

- (void)clearHapCategories;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearHapCharacteristics;
- (void)writeTo:(id)a0;
- (void)addHapCharacteristics:(id)a0;
- (id)description;
- (unsigned long long)hapCategoriesCount;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (void)addHapCategories:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hapServicesCount;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addHapServices:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearHapServices;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hapCharacteristicsCount;

@end
