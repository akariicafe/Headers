@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
