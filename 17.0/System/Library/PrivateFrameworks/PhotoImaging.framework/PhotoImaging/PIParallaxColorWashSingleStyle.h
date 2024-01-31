@class PFParallaxColor;

@interface PIParallaxColorWashSingleStyle : PIParallaxStyle <PIParallaxColorParameterStyle, PIParallaxBackgroundParameterStyle>

@property (retain, nonatomic) PFParallaxColor *color;
@property (nonatomic) BOOL showsBackground;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)kind;
- (id)parameters;
- (void).cxx_destruct;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (BOOL)hasBackgroundParameter;
- (BOOL)hasColorParameter;
- (id)initWithColor:(id)a0 background:(BOOL)a1 clockColor:(id)a2 suggestions:(id)a3;
- (id)recipeIdentifier;

@end
