@class NSString, UISwitch, PXSharedLibraryRulePeopleDataManager, PHPhotoLibrary, UICollectionViewDiffableDataSource, NSMutableArray, UICollectionView, UITableView;

@interface PXSharedLibrarySuggestionsSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate> {
    PHPhotoLibrary *_photoLibrary;
    UITableView *_tableView;
    UISwitch *_suggestionsEnabledSwitch;
    UICollectionView *_peopleCollectionView;
    UICollectionViewDiffableDataSource *_peopleCollectionViewDataSource;
    PXSharedLibraryRulePeopleDataManager *_peopleDataManager;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_updateSections;
- (void)addOtherPeople:(id)a0;
- (void)_addSectionWithConfigurationHandler:(id /* block */)a0;
- (void)_handleDoneAction:(id)a0;
- (void)_updateCollectionViewCell:(id)a0 forRulePerson:(id)a1;
- (void)removePerson:(id)a0;
- (void)sharedLibraryRulePeopleControllerDidChangeCurrentSnapshot:(id)a0;
- (void)suggestionsEnabledChanged:(id)a0;

@end
