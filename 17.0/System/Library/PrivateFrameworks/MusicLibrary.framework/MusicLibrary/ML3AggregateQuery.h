@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (void)dealloc;
- (unsigned long long)countOfEntities;
- (void)encodeWithCoder:(id)a0;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;
- (id)persistentIDProperty;
- (Class)entityClass;
- (void).cxx_destruct;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasEntities;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
