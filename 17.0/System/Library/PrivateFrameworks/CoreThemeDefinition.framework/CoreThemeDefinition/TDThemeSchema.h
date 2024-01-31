@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {
    CoreThemeDocument *_doc;
}

+ (BOOL)loadThemeConstantsForEntity:(id)a0 inContext:(id)a1;

- (void)dealloc;
- (void)loadThemeStates;
- (void)loadThemeValues;
- (void)loadThemeIdioms;
- (void)loadThemeTextureInterpretations;
- (void)_addSchemaPartDefinitionsForStandardElement:(const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)a0 withElement:(id)a1;
- (void)_loadConstantForEntity:(id)a0 withDescriptor:(const struct _themeconstant { long long x0; char *x1; char *x2; } *)a1;
- (BOOL)_renditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckObjectsWithEntityName:(id)a0 globalDescriptor:(void *)a1 matchIdentifierOnly:(BOOL)a2;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)a0 withElement:(id)a1;
- (id)initWithThemeDocument:(id)a0;
- (void)loadBasicThemePart;
- (void)loadColorNames;
- (void)loadColorStatuses;
- (void)loadEffectConstants;
- (void)loadGlyphSizeConstants;
- (void)loadGlyphWeightConstants;
- (void)loadIterationTypes;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadRenditionSubtypes;
- (void)loadRenditionTypes;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadStandardEffectDefinitions;
- (void)loadTemplateRenderingModeConstants;
- (void)loadTexturePixelFormats;
- (void)loadThemeCompressionTypes;
- (void)loadThemeDeploymentTargets;
- (void)loadThemeDirections;
- (void)loadThemeDisplayGamuts;
- (void)loadThemeDrawingLayers;
- (void)loadThemeElements;
- (void)loadThemeGraphicsFeatureSetClasses;
- (void)loadThemeParts;
- (void)loadThemePresentationStates;
- (void)loadThemeSizes;
- (void)loadThemeTextureFaces;
- (void)loadThemeUISizeClasses;
- (void)loadVectorGlyphRenderingModeConstants;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;

@end
