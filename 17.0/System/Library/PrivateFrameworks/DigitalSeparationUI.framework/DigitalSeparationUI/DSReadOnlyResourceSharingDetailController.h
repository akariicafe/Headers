@class UIViewController, NSArray, NSString, DSSharingPerson, DSSharingType;
@protocol DSNavigationDelegate, DSReadOnlyResourceSharingDetailDelegate;

@interface DSReadOnlyResourceSharingDetailController : DSTableWelcomeController <DSController>

@property (retain, nonatomic) DSSharingType *sharingType;
@property (retain, nonatomic) DSSharingPerson *sharingPerson;
@property (retain, nonatomic) id<DSReadOnlyResourceSharingDetailDelegate> detailDelegate;
@property (retain, nonatomic) NSArray *remainingSharingTypes;
@property (retain, nonatomic) NSArray *remainingSharingPeople;
@property (retain, nonatomic) UIViewController *startingViewController;
@property (nonatomic) BOOL isFinishedReviewing;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_removeDisplayedFromArray:(id)a0;
+ (id)initWithSharingPeople:(id)a0 startingViewController:(id)a1 delegate:(id)a2;
+ (id)initWithSharingTypes:(id)a0 startingViewController:(id)a1 delegate:(id)a2;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_removeFromView;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_finishReviewingReadOnlySharing;
- (void)_learnMorePressed;
- (void)_pushNextPane;

@end
