@interface ICQUICoreSpotlightQueryHelper : NSObject

+ (id)totalSizeStringForItems:(id)a0;
+ (id)queryForMinimumSizeInMegabytes:(id)a0;
+ (id)defaultFetchedAttributes;
+ (void)deleteiCloudDriveItem:(id)a0;
+ (void)deleteiCloudDriveItems:(id)a0;
+ (void)fetchTrashedItemsWithResults:(id)a0 minSizeInMegabytes:(id)a1 completion:(id /* block */)a2;
+ (void)fetchiCloudDriveItemsUsingThresholds:(id)a0 shouldCheckTrash:(BOOL)a1 completion:(id /* block */)a2;
+ (id)filterItems:(id)a0 usingTrashedItems:(id)a1;
+ (void)processFoundResults:(id)a0 minSizeInMegabytes:(id)a1 shouldCheckTrash:(BOOL)a2 completion:(id /* block */)a3;
+ (id)thresholdsForLargeFiles;
+ (void)updateThresholdsForLargeFilesWithDictionary:(id)a0;

@end
