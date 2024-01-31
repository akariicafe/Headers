@class NSString, NSArray;

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSArray *foreignKeyConstraints;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 concreteClass:(Class)a1;
- (id)columnDefinitionsSQL;
- (id)createTableSQLWithExistenceClause:(BOOL)a0;

@end
