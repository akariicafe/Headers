@class NSString, NSArray;

@interface ICRankingQueryDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) NSString *rankingQuery;
@property (readonly, nonatomic) NSArray *queryFields;
@property (readonly, nonatomic) NSArray *expandedTokens;
@property (readonly, nonatomic) long long rankingQueryType;
@property (readonly, nonatomic) NSString *rankingQueryFlags;
@property (readonly, nonatomic) unsigned long long displayedMatchedFields;
@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryFields:(id)a0 expandedTokens:(id)a1 rankingQueryType:(long long)a2 rankingQueryFlags:(id)a3 displayedMatchedFields:(unsigned long long)a4 purpose:(unsigned long long)a5;
- (id)initWithQueryFields:(id)a0 expandedTokens:(id)a1 rankingQueryType:(long long)a2 rankingQueryFlags:(id)a3 purpose:(unsigned long long)a4;
- (id)rankingQueryForQueryField:(id)a0 tokenString:(id)a1;
- (double)rankingScoreForSearchResultType:(unsigned long long)a0;

@end
