@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)inclusionPredicate;
- (BOOL)isCurated;
- (id)keyAssetsFetchResult;
- (BOOL)ensureKeyAssetAtBeginning;
- (id)exposedFetchResult;
- (id)curatedOids;
- (id)includedOids;
- (id /* block */)curatedRefetchCondition;
- (id)fetchResult;
- (id)filteredFetchResult;
- (id)description;
- (BOOL)wantsCuration;
- (long long)keyAssetIndex;
- (id)excludedOids;
- (id)curatedFetchResult;
- (BOOL)reverseSortOrder;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
