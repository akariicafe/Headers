@class NSMutableDictionary, NSMutableSet, PHPhotoLibrary, NSDate;

@interface PHImportDuplicateChecker : NSObject {
    NSMutableDictionary *_avchdAssetIdentifierCache;
    NSMutableDictionary *_sizeNameCache;
    NSMutableDictionary *_assetIdentifierCache;
    NSDate *_lastChange;
    NSMutableSet *_updatedDupInfos;
}

@property (retain, nonatomic) PHPhotoLibrary *library;

+ (id)_dateWithDate:(id)a0;
+ (id)_fetchAssetInfoFromLibrary:(id)a0 forFileSizes:(id)a1;
+ (id)duplicatesFromResults:(id)a0 forLibrary:(id)a1;

- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_populateCachesWithAssetsInfos:(id)a0;
- (id)_checkForDuplicate:(id)a0 considerItemsInTheTrash:(BOOL)a1;
- (id)_filterDuplicatesForItem:(id)a0 duplicateSet:(id)a1 considerItemsInTrash:(BOOL)a2;
- (BOOL)_findFingerprint:(id)a0 forItem:(id)a1 inCache:(id)a2 considerTrash:(BOOL)a3;
- (id)_findMatchingAssetsForItem:(id)a0 inSet:(id)a1 matchingDate:(id *)a2 confidence:(unsigned char *)a3;
- (void)_populateCachesWithAssetInfo:(id)a0;
- (void)_setDupInfo:(id)a0 forFingerprint:(id)a1 inCache:(id)a2;
- (void)_updateAssetsFromDupInfos;
- (void)findDuplicatesOfItems:(id)a0 considerItemsInTrash:(BOOL)a1 forEach:(id /* block */)a2 atEnd:(id /* block */)a3;

@end
