@class NSString, NSMutableArray;

@interface NSSUsageRespMsgBundleUsage : PBCodable <NSCopying> {
    struct { unsigned char purgeable : 1; } _has;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSMutableArray *categories;
@property (nonatomic) BOOL hasPurgeable;
@property (nonatomic) BOOL purgeable;

+ (Class)categoriesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)categoriesCount;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addCategories:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCategories;

@end
