@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL useSpotlightPrivateIndex;

+ (id)domainIdentifierForPhotoLibrary:(id)a0;
+ (BOOL)shouldDisablePhotosLegacySearchDonationForPhotoLibrary:(id)a0;
+ (id)domainIdentifierForSystemPhotoLibraryEntities;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (void)_searchableItemsFromManagedObjects:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2 itemsToUpdate:(out id *)a3 searchableItemUUIDsToRemove:(out id *)a4;
+ (id)searchableItemsFromManagedObjects:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (long long)_wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;
+ (id)photosBundleIdentifier;
+ (BOOL)isUniversalSearchEnabledForPhotoLibrary:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0;
+ (id)domainIdentifierForSystemPhotoLibrary;
+ (BOOL)searchableItemsFromManagedObjectIDs:(id)a0 entityName:(id)a1 translatorConfiguration:(id)a2 photoLibrary:(id)a3 searchableItemsToIndex:(out id *)a4 searchableItemUUIDsToRemove:(out id *)a5;
+ (BOOL)isVideoSearchEnabledForPhotoLibrary:(id)a0;

@end
