@class _UIActivityUserDefaults, NSArray, UIImage, NSString, NSMutableDictionary, NSDictionary, SFUIActivityImageProvider, _UIActivityUserDefaultsDataSource, NSDiffableDataSourceSnapshot, UITableView, UIVisualEffectView, BSAuditToken;
@protocol _UIActivityUserDefaultsViewControllerDelegate;

@interface _UIActivityUserDefaultsViewController : UIViewController <_UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate>

@property (readonly, nonatomic) SFUIActivityImageProvider *activityImageProvider;
@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *favoritesProxies;
@property (retain, nonatomic) NSMutableDictionary *favoritesByUUID;
@property (copy, nonatomic) NSArray *suggestionProxies;
@property (retain, nonatomic) NSMutableDictionary *suggestionsByUUID;
@property (retain, nonatomic) NSDictionary *activitiesByUUID;
@property (retain, nonatomic) NSArray *applicationActivityTypes;
@property (retain, nonatomic) NSArray *orderedUUIDs;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) long long activityCategory;
@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) _UIActivityUserDefaultsDataSource *diffableDataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<_UIActivityUserDefaultsViewControllerDelegate> userDefaultsDelegate;
@property (retain, nonatomic) BSAuditToken *hostAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)titleForSection:(long long)a0;
- (void)toggleActivityHiddenForControl:(id)a0;
- (id)activityForRowAtIndexPath:(id)a0;
- (id)cellForItemIdentifier:(id)a0;
- (void)configureSwitchForCell:(id)a0 activityProxy:(id)a1;
- (void)dismissUserDefaults;
- (void)doneEditingUserDefaults;
- (void)editUserDefaults;
- (id)initWithActivities:(id)a0 userDefaults:(id)a1;
- (id)initWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 activitiesByUUID:(id)a2 applicationActivityTypes:(id)a3 orderedUUIDs:(id)a4 excludedActivityTypes:(id)a5 activityCategory:(long long)a6;
- (long long)preferredActivityCategory;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)a0;
- (void)updateUserDefaultsAnimated:(BOOL)a0;

@end
