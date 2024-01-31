@class NSArray, NSString, NSDictionary;
@protocol PFStoryRecipeSongAsset, PFStoryRecipeStyle;

@interface PFStoryConcreteMutableRecipe : PFStoryConcreteRecipe <PFStoryMutableRecipe>

@property (copy, nonatomic) NSArray *libraries;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSArray *presentations;
@property (copy, nonatomic) NSString *contentIdentifier;
@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; } overallDurationInfo;
@property (copy, nonatomic) id<PFStoryRecipeStyle> currentStyle;
@property (copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog;
@property (retain, nonatomic) NSDictionary *autoEditDecisionLists;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, copy, nonatomic) id<PFStoryRecipeSongAsset> currentStyleSongAsset;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) long long numberOfPresentations;

- (void)setCurrentStyle:(id)a0;
- (void)setAssets:(id)a0;
- (void)removeAssetWithIdentifier:(id)a0;
- (void)setPresentations:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLibrary:(id)a0;
- (void)setLibraries:(id)a0;
- (void)addAsset:(id)a0;
- (void)addPresentation:(id)a0;
- (void)removeLibraryWithKind:(long long)a0;
- (void)removePresentationWithIdentifier:(id)a0;
- (void)setAutoEditDecisionLists:(id)a0;
- (void)setSeedSongIdentifiersByCatalog:(id)a0;

@end
