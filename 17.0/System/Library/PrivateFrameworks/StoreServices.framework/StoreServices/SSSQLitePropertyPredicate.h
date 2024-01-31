@class NSString;

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (unsigned long long)hash;
- (void)dealloc;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
