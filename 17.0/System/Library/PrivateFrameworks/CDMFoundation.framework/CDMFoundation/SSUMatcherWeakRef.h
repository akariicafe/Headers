@class SNLPSSUMatcher;

@interface SSUMatcherWeakRef : NSObject

@property (readonly, weak, nonatomic) SNLPSSUMatcher *matcher;

- (void).cxx_destruct;
- (id)initWithMatcher:(id)a0;

@end
