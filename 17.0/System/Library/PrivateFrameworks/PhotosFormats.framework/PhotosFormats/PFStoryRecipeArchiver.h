@class NSDictionary;

@interface PFStoryRecipeArchiver : NSObject

@property (class, readonly, nonatomic) NSDictionary *stringByLibraryKind;
@property (class, readonly, nonatomic) NSDictionary *stringByAssetKind;
@property (class, readonly, nonatomic) NSDictionary *stringByDisplayAssetCategory;
@property (class, readonly, nonatomic) NSDictionary *stringBySongCategory;
@property (class, readonly, nonatomic) NSDictionary *stringBySongSubcategory;
@property (class, readonly, nonatomic) NSDictionary *stringByOverallDurationKind;
@property (class, readonly, nonatomic) NSDictionary *stringByClipPlaybackStyle;
@property (class, readonly, nonatomic) NSDictionary *stringByClipMotionStyle;
@property (class, readonly, nonatomic) NSDictionary *stringByClipTransition;

- (id)_archivedJSONObjectWithDurationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a0;
- (id)_archivedJSONObjectWithOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a0;
- (id)archivedDataWithRecipe:(id)a0;
- (id)archivedJSONDataWithRecipe:(id)a0 options:(unsigned long long)a1;
- (id)archivedJSONObjectWithAsset:(id)a0;
- (id)archivedJSONObjectWithAutoEditDecisionList:(id)a0;
- (id)archivedJSONObjectWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)archivedJSONObjectWithClip:(id)a0;
- (id)archivedJSONObjectWithLibrary:(id)a0;
- (id)archivedJSONObjectWithPresentation:(id)a0;
- (id)archivedJSONObjectWithRecipe:(id)a0;
- (id)archivedJSONObjectWithStyle:(id)a0;

@end
