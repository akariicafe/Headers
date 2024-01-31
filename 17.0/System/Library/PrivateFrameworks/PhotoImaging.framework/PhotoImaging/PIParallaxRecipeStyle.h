@class NSString, PIParallaxStyleRecipe;

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}

- (id)recipe;
- (id)kind;
- (id)filter;
- (id)parameters;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)clockFont;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)a0 recipe:(id)a1;
- (id)recipeIdentifier;

@end
