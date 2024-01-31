@interface PNAmbientSuggestionUtilities : NSObject

+ (long long)assetIsEligibleForDisplay:(id)a0 modelSet:(id)a1;
+ (id)fetchHighlightAssetsInPhotoLibrary:(id)a0 limit:(unsigned long long)a1 randomSeed:(unsigned long long)a2;
+ (id)fetchMemoryKeyAssetsInPhotoLibrary:(id)a0 limit:(unsigned long long)a1 randomSeed:(unsigned long long)a2;
+ (long long)suggestionIsEligibleForDisplay:(id)a0 asset:(id)a1 modelSet:(id)a2;
+ (double)_cropScoreWithAsset:(id)a0;
+ (struct CGSize { double x0; double x1; })_deviceScreenSize;
+ (BOOL)_hasAcceptableCropScoreWithAsset:(id)a0;

@end
