@class WebBookmarkCollection, NSArray;

@interface BookmarkImporter : NSObject {
    WebBookmarkCollection *_collection;
    NSArray *_carrierBookmarkInfo;
    NSArray *_oldDeletedStaticBookmarks;
}

- (void).cxx_destruct;
- (long long)_currentDeviceClass;
- (void)_clearOldDeletedStaticBookmarks;
- (void)_appendBookmarksFromSource:(id)a0 toParent:(int)a1;
- (void)_appendBuiltinBookmarkWithInfo:(id)a0 toParent:(int)a1 asCarrierBookmark:(BOOL)a2;
- (id)_builtInBookmarkItemWithTemplate:(id)a0 forLocale:(id)a1 deviceClass:(long long)a2;
- (id)_builtinBookmarkWithInfo:(id)a0 asCarrierBookmark:(BOOL)a1;
- (id)_builtinFavoritesForLocale:(id)a0 deviceClass:(long long)a1;
- (id)_carrierBundleBuiltinBookmarkInfo;
- (void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(id /* block */)a0;
- (id)_googleChannelReplacementStringForDeviceClass:(long long)a0;
- (void)_importCarrierBookmarksIfNecessary;
- (void)_importCarrierBookmarksIfNecessaryAsync;
- (void)_importFavoritesFolderBuiltinBookmarks;
- (void)_importRootFolderBuiltinBookmarks;
- (id)_lastImportedCarrierBookmarksInfo;
- (id)_myAccountBookmarkInfo;
- (id)_oldDeletedStaticBookmarks;
- (void)_setLastImportedCarrierBookmarksInfo:(id)a0;
- (id)_uniqueYouTubeBookmarkFolderName;
- (void)importBuiltinBookmarks;
- (id)initWithBookmarkCollection:(id)a0;
- (void)migrateYouTubeBookmarks;
- (id)test_builtinFavoritesForLocale:(id)a0 deviceClass:(long long)a1;

@end
