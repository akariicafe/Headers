@class NSArray, NSString, PSIGroupResult;

@interface PLSearchResult : NSObject

@property (readonly, nonatomic) PSIGroupResult *groupResult;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long categoryMask;
@property (readonly, nonatomic) NSArray *searchTokens;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSArray *matchRanges;
@property (readonly, nonatomic) NSString *transientToken;
@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSString *groupDescription;
@property (readonly) NSString *owningContentString;

- (unsigned long long)groupCount;
- (void).cxx_destruct;
- (long long)categoryAtIndex:(long long)a0;
- (id)initWithGroupResult:(id)a0;
- (BOOL)isContentStringTextSearchableAtIndex:(long long)a0;
- (BOOL)isImplicitlyTokenized;
- (BOOL)isMatchedByIdentifierAtIndex:(long long)a0;
- (BOOL)isSinglePersonOrPetResult;
- (id)matchRangesAtIndex:(long long)a0;
- (id)tokensAtIndex:(long long)a0;

@end
