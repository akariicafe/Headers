@interface CSTopHitQueryContext : CSUserQueryContext

@property (nonatomic) long long maxItemCount;

+ (id)topHitQueryContext;
+ (id)topHitQueryContextWithCurrentSuggestion:(id)a0;

@end
