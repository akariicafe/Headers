@interface PIParallaxStudioStyle : PIParallaxStyle <PIParallaxTonalityModeStyle>

@property (nonatomic) long long tonality;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)kind;
- (id)parameters;
- (BOOL)hasTonalityMode;
- (BOOL)configureForCategory:(id)a0;
- (id)recipeIdentifier;

@end
