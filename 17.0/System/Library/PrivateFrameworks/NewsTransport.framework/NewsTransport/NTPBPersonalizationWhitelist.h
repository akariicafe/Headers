@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)disabledPortraitTagsType;
+ (Class)optionalTagsType;
+ (Class)defaultTagsType;

- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)defaultTagsCount;
- (void)clearOptionalTags;
- (unsigned long long)disabledPortraitTagsCount;
- (void)addOptionalTags:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearDisabledPortraitTags;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addDisabledPortraitTags:(id)a0;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addDefaultTags:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)optionalTagsCount;
- (BOOL)isEqual:(id)a0;
- (void)clearDefaultTags;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
