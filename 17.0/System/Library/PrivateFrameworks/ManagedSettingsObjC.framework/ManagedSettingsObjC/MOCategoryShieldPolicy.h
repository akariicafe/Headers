@class NSArray;

@interface MOCategoryShieldPolicy : NSObject

@property (readonly) long long policy;
@property (readonly) NSArray *specificCategories;
@property (readonly) NSArray *excludedContent;

+ (id)allPolicyWithExcludedContent:(id)a0;
+ (id)nonePolicy;
+ (id)specificPolicyWithCategories:(id)a0 excludedContent:(id)a1;

- (id)initWithPolicy:(long long)a0 specificCategories:(id)a1 excludedContent:(id)a2;
- (void).cxx_destruct;

@end
