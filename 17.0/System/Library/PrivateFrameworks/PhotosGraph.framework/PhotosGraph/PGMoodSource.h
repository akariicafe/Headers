@class PGMoodVector, PGMoodGeneratorOptions, NSDictionary, PHPhotoLibrary, PHAssetCollection, PGEnrichedMemory;

@interface PGMoodSource : NSObject

@property (readonly) PHAssetCollection *assetCollection;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGMoodGeneratorOptions *options;
@property (readonly) PGEnrichedMemory *enrichedMemory;
@property (retain) PGMoodVector *positiveVector;
@property (retain) PGMoodVector *negativeVector;
@property (readonly) NSDictionary *moodSourceDictionary;

+ (id)_plistName;

- (double)weight;
- (void).cxx_destruct;
- (id)_plistMoodIdentifiersWithGraph:(id)a0;
- (void)_combineMoodVectorsWithGraph:(id)a0;
- (id)_moodVectorForMoodIdentifier:(id)a0;
- (id)_moodVectorsWithGraph:(id)a0;
- (unsigned long long)_sourceInputCount;
- (id)initWithAssetCollection:(id)a0 photoLibrary:(id)a1 options:(id)a2;
- (id)initWithEnrichedMemory:(id)a0 photoLibrary:(id)a1 options:(id)a2;
- (id)negativeVectorWithGraph:(id)a0;
- (id)positiveVectorWithGraph:(id)a0;

@end
