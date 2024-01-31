@class NSString;

@interface MPModelKind : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly, nonatomic) MPModelKind *identityKind;
@property (class, readonly, nonatomic) MPModelKind *unknownKind;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) MPModelKind *identityKind;

+ (id)_kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;
+ (id)kindWithModelClass:(Class)a0;
+ (id)kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (id)description;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(void *)a0;
- (void).cxx_destruct;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithModelClass:(Class)a0;

@end
