@class NSString, NSArray;

@interface MusicSettingsListItemsViewController : PSListItemsController <MusicSettingsSupportController>

@property (copy, nonatomic) NSString *stringsTable;
@property (copy, nonatomic) NSArray *allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)itemsFromParent;
- (void)listItemSelected:(id)a0;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)updateVisibleSpecifiers;
- (id)valueForMusicCapability:(id)a0;

@end
