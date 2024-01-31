@class PFParallaxColor;

@interface PIParallaxColorWashDuotoneStyle : PIParallaxStyle <PIParallaxColorParameterStyle, PIParallaxBackgroundParameterStyle>

@property (retain, nonatomic) PFParallaxColor *primaryColor;
@property (retain, nonatomic) PFParallaxColor *secondaryColor;
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
- (id)initWithPrimaryColor:(id)a0 secondaryColor:(id)a1 background:(BOOL)a2 clockColor:(id)a3 colorSuggestions:(id)a4;
- (id)recipeIdentifier;

@end
