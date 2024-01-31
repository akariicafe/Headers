@class NSMutableArray;

@interface ACHCodableAchievementProgressUpdateArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *achievementProgressUpdates;

+ (Class)achievementProgressUpdateType;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
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
- (unsigned long long)achievementProgressUpdatesCount;
- (void)clearAchievementProgressUpdates;
- (id)achievementProgressUpdateAtIndex:(unsigned long long)a0;
- (void)addAchievementProgressUpdate:(id)a0;

@end
