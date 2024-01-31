@class UIViewController, NSString, NSArray, LibraryConfiguration;
@protocol LibraryContentObserver;

@interface LibrarySectionController : NSObject

@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *itemControllers;
@property (weak) id<LibraryContentObserver> contentObserver;
@property (weak) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSArray *filteredItemControllers;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)contentDidChange;
- (id)itemControllerToHandleDropItemsFromSession:(id)a0 withProposedDestinationItemController:(id)a1 atIndex:(long long)a2;
- (void)registerItemsWithRegistration:(id)a0;
- (void)updateToolbarIfNeeded;

@end
