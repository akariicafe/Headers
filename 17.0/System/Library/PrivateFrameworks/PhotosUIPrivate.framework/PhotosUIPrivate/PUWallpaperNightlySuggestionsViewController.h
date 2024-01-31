@class PUWallpaperNightlySuggestionsDataSource, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsViewController : PUWallpaperClassListViewController {
    PUWallpaperNightlySuggestionsDataSource *_dataSource;
    NSDate *_currentDate;
}

@property (retain, nonatomic) id<PUWallpaperNightlySuggestionsPosterConfiguration> posterConfiguration;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)createDataSources;
- (void)nextDate:(id)a0;
- (void)previousDate:(id)a0;

@end
