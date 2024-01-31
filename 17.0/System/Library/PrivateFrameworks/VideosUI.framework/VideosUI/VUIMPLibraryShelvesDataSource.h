@class NSString, NSMutableArray, VUIMediaLibrary;

@interface VUIMPLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate>

@property (retain, nonatomic) NSMutableArray *fetchedDataSources;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_addRentalsUpdateNotificationObserver;
- (id)_dataSourceForShelves;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_updateRentalShelf;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)initWithValidShelfTypes:(id)a0 forMediaLibrary:(id)a1;
- (void)startFetch;

@end
