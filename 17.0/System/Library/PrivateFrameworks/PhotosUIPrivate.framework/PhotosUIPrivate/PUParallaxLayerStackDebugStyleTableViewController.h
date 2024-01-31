@class PUParallaxLayerStackViewModelUpdater, NSArray, PUParallaxLayerStackViewModel;

@interface PUParallaxLayerStackDebugStyleTableViewController : UITableViewController <PUParallaxLayerStackDebugStyleTableViewCellDelegate> {
    NSArray *_cachedAvailableStyles;
}

@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (retain, nonatomic) PUParallaxLayerStackViewModelUpdater *viewModelUpdater;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)availableStyles;
- (void)cellValueUpdated:(id)a0;
- (id)indexPathForStyle:(id)a0;

@end
