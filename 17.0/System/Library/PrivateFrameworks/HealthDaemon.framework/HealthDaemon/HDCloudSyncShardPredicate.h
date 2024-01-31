@class NSDate;

@interface HDCloudSyncShardPredicate : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)codablePredicate;
- (id)initForShardType:(int)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithCodableShardPredicate:(id)a0;

@end
