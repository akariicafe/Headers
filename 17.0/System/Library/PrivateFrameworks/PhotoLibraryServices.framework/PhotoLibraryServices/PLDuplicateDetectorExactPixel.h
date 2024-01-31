@class NSString, NSArray, NSMutableSet;

@interface PLDuplicateDetectorExactPixel : NSObject <PLDuplicateDetector> {
    NSArray *_sourceAssetOIDs;
    NSMutableSet *_processedOIDs;
    NSMutableSet *_processedHashes;
    BOOL _enableEXIFDataAccess;
    BOOL _enableScreenshotProcessing;
    BOOL _disablePostProcessing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_addKey:(id)a0 value:(id)a1 map:(id)a2;
- (void)_fetchLimitedSelectionHashes:(id *)a0 alternativeHashes:(id *)a1 photoLibrary:(id)a2;
- (id)_generateDuplicateContainerFromProcessedHashOIDMap:(id)a0 oidHashMap:(id)a1;
- (id)_generateDuplicateContainerFromResults:(id)a0;
- (id)_hashIsValidPredicate;
- (id)_limitedSelectionPredicateWithPhotoLibrary:(id)a0;
- (BOOL)_postProcessDuplicateWithPhotoLibrary:(id)a0 resultContainer:(id)a1 error:(id *)a2;
- (id)_postProcessFetchMetadataWithPhotoLibrary:(id)a0 resultContainer:(id)a1 error:(id *)a2;
- (BOOL)_postProcessIsValidDateSource:(long long)a0;
- (id)_postProcessingRequestAssetsFromDuplicateAssetOIDs:(id)a0;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:(id)a0 pathManager:(id)a1;
- (id)_predicateWithPhotoLibrary:(id)a0;
- (id)_propertiesToFetch;
- (id)_sceneprintRequestWithPhotoLibrary:(id)a0;
- (void)_updateDuplicateAssetOIDResults:(id)a0 forAssetOID:(id)a1 relatedProcessedHashOIDMap:(id)a2 oidHashMap:(id)a3;
- (void)_updateDuplicateAssetOIDResults:(id)a0 forHash:(id)a1 relatedProcessedHashOIDMap:(id)a2 oidHashMap:(id)a3;
- (id)detectDuplicatesWithPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initWithSourceAssetOIDs:(id)a0;

@end
