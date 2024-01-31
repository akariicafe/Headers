@interface PFStoryRecipeUnarchiver : NSObject

- (id)_unarchivedStyleWithJSONObject:(id)a0;
- (id)unarchivedRecipeWithData:(id)a0 error:(id *)a1;
- (id)_existingKeyInDictionary:(id)a0 forObject:(id)a1;
- (id)_unarchivedClipWithJSONObject:(id)a0;
- (id)_unarchivedDecisionListWithJSONObject:(id)a0 songAssetIdentifier:(id)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })_unarchivedDurationInfoWithJSONObject:(id)a0;
- (id)_unarchivedLibraryWithJSONObject:(id)a0 error:(id *)a1;
- (struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })_unarchivedOverallDurationInfoWithJSONObject:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })unarchiveTimeWithJSONObject:(id)a0;
- (id)unarchivedAssetWithJSONObject:(id)a0 error:(id *)a1;
- (id)unarchivedRecipeWithJSONObject:(id)a0 error:(id *)a1;

@end
