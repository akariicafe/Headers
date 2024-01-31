@interface MPModelPlaylistAuthorKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;

+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)a0;

- (id)humanDescription;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(void *)a0;

@end
