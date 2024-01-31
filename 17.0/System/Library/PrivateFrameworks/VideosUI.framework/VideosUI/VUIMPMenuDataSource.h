@class NSString, NSArray, NSDictionary, VUIDownloadDataSource, VUIMediaEntitiesFetchController, VUIMediaLibrary, VUILibraryFamilyMembersDataSource;

@interface VUIMPMenuDataSource : VUILibraryMenuDataSource <VUIMediaEntitiesFetchControllerDelegate, VUILibraryDataSourceDelegate, VUIDownloadDataSourceDelegate>

@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController;
@property (retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType;
@property (nonatomic) BOOL hasMediaEntitiesFetchCompleted;
@property (retain, nonatomic) NSArray *genreGroupings;
@property (nonatomic) BOOL hasGenresDataForCheckHasItemsOption;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController;
@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *familyDataSource;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (nonatomic) BOOL hasDownloadDataSourceFetchCompleted;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_accountsChanged:(id)a0;
- (void).cxx_destruct;
- (void)refetch;
- (void)downloadManager:(id)a0 downloadsDidChange:(id)a1;
- (void)_notifyDelegateFetchDidComplete;
- (void)_addAccountChangedNotificationObserver;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (BOOL)_addOrRemoveDownloadCategoryIfNeeded;
- (BOOL)_addOrRemoveFamilySharingCategoryIfNeeded;
- (void)_addRentalsUpdateNotificationObserver;
- (BOOL)_allFetchesHaveCompleted;
- (id /* block */)_categoryTypesSortComparator;
- (id)_categoryTypesWithMediaEntitiesMap:(id)a0 categoryTypeComparator:(id /* block */)a1;
- (id)_categoryTypesWithOptimizedMenuDataMap:(id)a0 categoryTypeComparator:(id /* block */)a1;
- (id)_constructCategoryList;
- (id)_deviceMediaLibrary;
- (id)_fetchRequestsWithMediaLibrary:(id)a0 categoryTypeMap:(id *)a1 isInitialFetch:(BOOL)a2;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_loadInitialMediaEntityShelves;
- (void)_loadMediaEntityShelvesWithInitialFetch:(BOOL)a0;
- (void)_populateViewModelFromMeidaLibraryCategoryTypes:(id)a0;
- (void)_refetchMediaEntityShelves;
- (void)_removeAccountChangedNotificationObserver;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_updateFetchRequest:(id)a0 isInitialFetch:(BOOL)a1;
- (void)_updateRentalShelf;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)downloadManager:(id)a0 downloadedFetchDidFinishWithEntities:(id)a1;
- (id)initWithValidCategories:(id)a0;
- (void)startFetch;

@end
