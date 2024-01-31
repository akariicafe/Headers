@interface PLResourceChooser : NSObject

+ (void)_chooseCloudResourceTypeForFormat:(id)a0 asset:(id)a1 optimalCPLResourceType:(unsigned long long *)a2 localCPLResourceType:(unsigned long long *)a3 localCPLResourceFilePath:(id *)a4 fileReservation:(id *)a5;
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)a0 format:(id)a1 forceLarge:(BOOL)a2 allowMetadataSnapshot:(BOOL)a3 outFilePath:(id *)a4 outImageType:(long long *)a5;
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)a0 hasAdjustments:(BOOL)a1 requiresUnadjustedVersion:(BOOL)a2;
+ (id)_filteredArrayUsingPredicate:(id)a0 originalItems:(id)a1 nonMatchingItems:(id *)a2;
+ (id)_itemMatchingFormat:(id)a0 allItems:(id)a1 acceptableSortedAlternatives:(id *)a2;
+ (id)_originalItemFromAllItems:(id)a0;
+ (id)_penultimateItemFromAllItems:(id)a0;
+ (unsigned long long)cloudResourceTypeForAsset:(id)a0 format:(id)a1 filePath:(id *)a2 imageType:(long long *)a3;
+ (id)fileReservationForImageFileForAsset:(id)a0 format:(id)a1 outFilePath:(id *)a2 outImageType:(long long *)a3;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)a0 format:(id)a1 allowMetadataSnapshot:(BOOL)a2 forceLarge:(BOOL)a3 outFilePath:(id *)a4 outImageType:(long long *)a5;

- (id)init;

@end
