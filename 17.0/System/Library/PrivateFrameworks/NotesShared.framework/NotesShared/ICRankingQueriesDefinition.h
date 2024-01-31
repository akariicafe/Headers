@class NSArray, NSString, NSMutableDictionary;

@interface ICRankingQueriesDefinition : NSObject

@property (retain, nonatomic) NSArray *expandedTokens;
@property (nonatomic) long long rankingQueryType;
@property (retain, nonatomic) NSString *rankingQueryFlags;
@property (retain, nonatomic) NSMutableDictionary *matchingDescriptorsCache;
@property (readonly, nonatomic) NSArray *rankingQueryDescriptors;
@property (readonly, nonatomic) NSArray *rankingQueries;

+ (unsigned long long)bucketOfTimeInterval:(double)a0;
+ (unsigned long long)maxCountOfVariantsForCountOfTokens:(unsigned long long)a0;
+ (unsigned long long)modificationDateBucketForSearchableItem:(id)a0;
+ (unsigned long long)relevanceBitFieldForSearchableItem:(id)a0;

- (void).cxx_destruct;
- (id)highlightInfoForSearchableItem:(id)a0;
- (void)addDescriptor:(id)a0 intoSearchResultHighlightInfoFieldElement:(id)a1;
- (id)initWithExpandedTokens:(id)a0 rankingQueryType:(long long)a1 rankingQueryFlags:(id)a2;
- (id)initWithSearchString:(id)a0 rankingQueryType:(long long)a1 rankingQueryFlags:(id)a2;
- (id)matchingDescriptorsForBitFields:(unsigned long long)a0;
- (double)rankingScoreForSearchableItem:(id)a0;

@end
