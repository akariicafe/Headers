@interface VideosUI.LibrarySideBarManager : NSObject <VUILibraryDataSourceDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ libraryOnly;
    void /* unknown type, empty encoding */ libraryMenuDataSource;
    void /* unknown type, empty encoding */ deviceMediaLibrary;
    void /* unknown type, empty encoding */ initialFetchFinished;
    void /* unknown type, empty encoding */ cachedLibraryCategoriesLoaded;
    void /* unknown type, empty encoding */ stopped;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadItem;
    void /* unknown type, empty encoding */ promptCategories;
    void /* unknown type, empty encoding */ $__lazy_storage_$_promptItems;
    void /* unknown type, empty encoding */ menuDataSourceBarItems;
    void /* unknown type, empty encoding */ visibleBarItems;
    void /* unknown type, empty encoding */ forcedUpdate;
    void /* unknown type, empty encoding */ genresController;
    void /* unknown type, empty encoding */ libraryViewController;
    void /* unknown type, empty encoding */ rebaseFromLibraryViewController;
    void /* unknown type, empty encoding */ categoryForRebase;
    void /* unknown type, empty encoding */ categorylessRebase;
}

- (void)accountsChanged:(id)a0;
- (void)networkReachabilityDidChange:(id)a0;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)isLibraryOnlyCountryChanged:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
