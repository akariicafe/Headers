@class NSString, NSDictionary, PUTopPeopleWallpaperSuggesterFilteringContext, PUTopPeopleWallpaperSuggestionsScoringContext, PUTopPeopleWallpaperSuggestionsDistancingContext, NSMutableSet;

@interface PUTopPeopleWallpaperSuggestionsDebugViewController : PUPhotosAlbumViewController <PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> {
    NSMutableSet *_usedAssetLocalIdentifiers;
    NSDictionary *_scoreByAssetLocalIdentifier;
}

@property (readonly) PUTopPeopleWallpaperSuggesterFilteringContext *filteringContext;
@property (readonly) PUTopPeopleWallpaperSuggestionsScoringContext *scoringContext;
@property (readonly) PUTopPeopleWallpaperSuggestionsDistancingContext *distancingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (void)_presentTapToRadar;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_editSettings:(id)a0;
- (id)newToolbarItems;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_fileRadarWithGoodSuggestions:(id)a0 badSuggestions:(id)a1;
- (void)_next:(id)a0;
- (void)_rewind:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 goodSuggestions:(id)a1 badSuggestions:(id)a2;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)settingsDidDismiss;
- (BOOL)shouldShowToolbar;

@end
