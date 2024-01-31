@class NSArray, NSString, PFParallaxColor, NSDictionary, PIParallaxStyleRecipe;

@interface PIParallaxStyle : NSObject

@property (retain, nonatomic) NSArray *colorSuggestions;
@property (readonly, copy, nonatomic) NSString *recipeIdentifier;
@property (readonly, copy, nonatomic) NSString *inactiveRecipeIdentifier;
@property (readonly, nonatomic) PIParallaxStyleRecipe *recipe;
@property (retain, nonatomic) PFParallaxColor *clockColor;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *clockFont;
@property (readonly, nonatomic) double clockVibrancy;
@property (readonly, nonatomic) BOOL isSegmented;
@property (readonly, nonatomic) BOOL hasTonalityMode;
@property (readonly, nonatomic) BOOL hasHeadroomLook;
@property (readonly, nonatomic) BOOL hasColorParameter;
@property (readonly, nonatomic) BOOL hasBackgroundParameter;

+ (id)_filterForRecipeIdentifier:(id)a0;
+ (id)colorPaletteWithStyleKind:(id)a0;
+ (id)defaultOriginalStyle;
+ (id)defaultStyleForKind:(id)a0 colorAnalysis:(id)a1;
+ (id)styleWithBakedStyle:(id)a0;
+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)filter;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)bakedStyle;
- (id)colorSuggestionForCategory:(id)a0;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)inactiveFilter;
- (id)initWithClockColor:(id)a0 colorSuggestions:(id)a1;
- (id)initWithClockColor:(id)a0 vibrancy:(double)a1 colorSuggestions:(id)a2;

@end
