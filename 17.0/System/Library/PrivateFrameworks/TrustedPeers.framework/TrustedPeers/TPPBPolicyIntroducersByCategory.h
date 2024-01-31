@class NSString, NSMutableArray;

@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *introducers;

+ (Class)introducersType;
+ (id)TPPBPolicyIntroducersByCategoryWithCategory:(id)a0 introducers:(id)a1;

- (void)clearIntroducers;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)introducersCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addIntroducers:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)introducersAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
