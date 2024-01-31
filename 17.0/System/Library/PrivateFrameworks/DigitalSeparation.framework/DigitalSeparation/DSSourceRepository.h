@class NSDictionary, NSArray;

@interface DSSourceRepository : NSObject

@property (copy, nonatomic) NSDictionary *sourcesByName;
@property (readonly, copy, nonatomic) NSArray *sources;

+ (void)initialize;
+ (id)repositoryWithURL:(id)a0;
+ (BOOL)runtimeFeatureFlagsEnabledFor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
