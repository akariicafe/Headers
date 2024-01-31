@class NSDictionary, NSArray;

@interface PIParallaxStyleRecipe : NSObject

@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, copy, nonatomic) NSArray *foregroundFilters;
@property (readonly, copy, nonatomic) NSArray *backgroundFilters;
@property (readonly, copy, nonatomic) NSArray *matteFilters;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithParameters:(id)a0 foregroundFilters:(id)a1 backgroundFilters:(id)a2 matteFilters:(id)a3;
- (BOOL)isEqualToParallaxStyleRecipe:(id)a0;

@end
