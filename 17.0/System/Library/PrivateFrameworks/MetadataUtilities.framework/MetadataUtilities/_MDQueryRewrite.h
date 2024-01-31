@class NSString;

@interface _MDQueryRewrite : NSObject

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) id searchQueryContext;
@property (nonatomic) float score;

- (void)dealloc;
- (id)initWithSearchQueryString:(id)a0 searchQueryContext:(id)a1 score:(float)a2;

@end
