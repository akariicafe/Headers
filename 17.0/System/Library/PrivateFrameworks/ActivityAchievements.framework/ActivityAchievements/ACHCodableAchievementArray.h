@class NSMutableArray;

@interface ACHCodableAchievementArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *achievements;

+ (Class)achievementsType;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (void)addAchievements:(id)a0;
- (unsigned long long)hash;
- (id)initWithCodableAchievements:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAchievements;
- (id)achievementsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)achievementsCount;

@end
