@class NSArray;
@protocol SKUIMenuViewControllerDelegate;

@interface SKUIMenuViewController : UITableViewController

@property (readonly, nonatomic) NSArray *menuTitles;
@property (readonly, nonatomic) NSArray *menuImages;
@property (weak, nonatomic) id<SKUIMenuViewControllerDelegate> delegate;
@property (nonatomic) long long indexOfCheckedTitle;
@property (nonatomic) long long menuStyle;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (id)initWithMenuTitles:(id)a0;
- (id)initWithMenuTitles:(id)a0 images:(id)a1;

@end
