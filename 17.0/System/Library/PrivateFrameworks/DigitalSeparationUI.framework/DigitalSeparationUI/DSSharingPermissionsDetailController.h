@class UIViewController, NSArray, DSSharingPerson, DSSharingType;
@protocol DSSharingPermissionsDetailDelegate;

@interface DSSharingPermissionsDetailController : DSTableWelcomeController

@property (retain, nonatomic) DSSharingPerson *sharingPerson;
@property (retain, nonatomic) NSArray *remainingPeople;
@property (retain, nonatomic) DSSharingType *sharingType;
@property (retain, nonatomic) NSArray *remainingSharingTypes;
@property (retain, nonatomic) NSArray *sortedSourceNames;
@property (retain, nonatomic) NSArray *sortedPeople;
@property (retain, nonatomic) UIViewController *startingViewController;
@property (weak, nonatomic) id<DSSharingPermissionsDetailDelegate> delegate;

+ (void)initialize;
+ (id)detailControllerWithPeople:(id)a0 startingViewController:(id)a1 delegate:(id)a2;
+ (id)detailControllerWithSharingTypes:(id)a0 startingViewController:(id)a1 delegate:(id)a2;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)next;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (id)alertTextForSources:(id)a0;
- (id)personForIndexPath:(id)a0;
- (void)reloadTableViewData;
- (void)sharingStoppedForPerson:(id)a0 sourceNames:(id)a1 error:(id)a2;
- (void)sharingStoppedForType:(id)a0 people:(id)a1 error:(id)a2;
- (id)sourceNameForIndexPath:(id)a0;
- (void)stopAllSharing;
- (void)stopSelectedSharing;
- (void)stopSharingSources:(id)a0 people:(id)a1 alertLabel:(id)a2 alertDetail:(id)a3 completion:(id /* block */)a4;

@end
