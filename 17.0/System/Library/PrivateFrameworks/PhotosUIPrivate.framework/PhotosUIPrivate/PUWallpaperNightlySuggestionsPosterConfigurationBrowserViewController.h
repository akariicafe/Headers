@class NSArray, PUWallpaperNightlySuggestionsViewController, PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsPosterConfigurationBrowserViewController : UITableViewController {
    NSArray *_posterConfigurations;
    PUWallpaperNightlySuggestionsViewController *_suggestionViewController;
    BOOL _isPresentingCustomPosterConfigurationSettings;
    PUWallpaperNightlySuggestionsPosterConfiguration *_customConfiguration;
    NSArray *_persons;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_doneEditingSettings:(id)a0;
- (void)_setIncludeCityscapes:(id)a0;
- (void)_setIncludeLandscapes:(id)a0;
- (void)_setIncludePets:(id)a0;
- (void)doCustomPosterConfiguration;

@end
