@class NSString, NSMutableArray;

@interface NTKProtoPigmentCollectionConfig : PBCodable <NSCopying> {
    struct { unsigned char excludesDuotone : 1; unsigned char isAddable : 1; unsigned char sensitivity : 1; unsigned char sortedByHue : 1; unsigned char supportsSlider : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDefaultColorOptionName;
@property (retain, nonatomic) NSString *defaultColorOptionName;
@property (readonly, nonatomic) BOOL hasFallbackDefaultColorOptionName;
@property (retain, nonatomic) NSString *fallbackDefaultColorOptionName;
@property (readonly, nonatomic) BOOL hasDefaultConfigAttributeName;
@property (retain, nonatomic) NSString *defaultConfigAttributeName;
@property (retain, nonatomic) NSMutableArray *defaultGalleryColorNames;
@property (nonatomic) BOOL hasSensitivity;
@property (nonatomic) BOOL sensitivity;
@property (nonatomic) BOOL hasIsAddable;
@property (nonatomic) BOOL isAddable;
@property (nonatomic) BOOL hasSortedByHue;
@property (nonatomic) BOOL sortedByHue;
@property (nonatomic) BOOL hasSupportsSlider;
@property (nonatomic) BOOL supportsSlider;
@property (readonly, nonatomic) BOOL hasFeatureFlag;
@property (retain, nonatomic) NSString *featureFlag;
@property (nonatomic) BOOL hasExcludesDuotone;
@property (nonatomic) BOOL excludesDuotone;
@property (retain, nonatomic) NSMutableArray *exclusions;
@property (retain, nonatomic) NSMutableArray *migrations;
@property (readonly, nonatomic) BOOL hasCollectionOverride;
@property (retain, nonatomic) NSString *collectionOverride;

+ (Class)migrationType;
+ (Class)defaultGalleryColorNamesType;
+ (Class)exclusionsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearExclusions;
- (unsigned long long)exclusionsCount;
- (void)clearMigrations;
- (unsigned long long)migrationsCount;
- (void)addDefaultGalleryColorNames:(id)a0;
- (void)addExclusions:(id)a0;
- (void)addMigration:(id)a0;
- (void)clearDefaultGalleryColorNames;
- (id)defaultGalleryColorNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)defaultGalleryColorNamesCount;
- (id)exclusionsAtIndex:(unsigned long long)a0;
- (id)migrationAtIndex:(unsigned long long)a0;

@end
