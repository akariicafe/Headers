@interface PXSearchQueryOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long curatedAssetLimit;
@property (nonatomic) BOOL wantsCuratedAssetsFetchResult;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) BOOL wantsLibraryChanges;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) BOOL wantsWordEmbeddings;
@property (nonatomic) unsigned long long libraryScope;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
