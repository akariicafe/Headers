@class NSArray;

@interface _MDQueryRewriteContext : NSObject

@property (copy, nonatomic) NSArray *tokenRewrites;

- (void)dealloc;
- (id)initWithRewrittenTokens:(id)a0;

@end
