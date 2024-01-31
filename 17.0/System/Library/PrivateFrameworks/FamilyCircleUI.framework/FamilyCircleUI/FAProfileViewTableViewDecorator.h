@class NSMutableDictionary, FAFamilyMember, FAProfilePictureStore, RUITableView;

@interface FAProfileViewTableViewDecorator : FATableViewDecorator {
    RUITableView *_remoteTableViewController;
    FAFamilyMember *_familyMember;
    FAProfilePictureStore *_pictureStore;
    NSMutableDictionary *_profileViewForCells;
}

+ (BOOL)_shouldShowInSection:(id)a0;
+ (BOOL)shouldShowInPage:(id)a0;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)_getOrCreateProfileViewForCell:(id)a0;
- (void)_addProfileViewToCell:(id)a0;
- (id)_keyForCell:(id)a0;
- (id)_profileViewForCell:(id)a0;
- (void)_removeProfileViewFromCell:(id)a0;
- (id)initWithTableView:(id)a0 ruiTableView:(id)a1 forPerson:(id)a2 pictureStore:(id)a3;

@end
