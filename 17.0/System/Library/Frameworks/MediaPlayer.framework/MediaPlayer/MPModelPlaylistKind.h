@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) MPModelPlaylistEntryKind *playlistEntryKind;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithVariants:(unsigned long long)a0 playlistEntryKind:(id)a1 options:(unsigned long long)a2;
+ (id)identityKind;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (id)humanDescription;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(void *)a0;
- (void).cxx_destruct;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
