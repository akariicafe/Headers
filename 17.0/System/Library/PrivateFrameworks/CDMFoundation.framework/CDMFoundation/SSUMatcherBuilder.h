@class NSMutableDictionary;

@interface SSUMatcherBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_matchers;

+ (id)buildMatcher:(id)a0 error:(id *)a1;
+ (id)sharedBuilder;

- (id)_init;
- (void).cxx_destruct;
- (id)getMatcherForBuildParams:(id)a0 error:(id *)a1;
- (BOOL)hasMatcher:(id)a0;
- (unsigned long long)numMatchers;

@end
