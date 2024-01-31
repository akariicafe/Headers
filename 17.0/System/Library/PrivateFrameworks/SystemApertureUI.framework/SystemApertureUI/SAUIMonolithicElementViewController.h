@protocol SAUIMonolithicElementViewProviding;

@interface SAUIMonolithicElementViewController : SAUILayoutSpecifyingElementViewController

@property (readonly, nonatomic) id<SAUIMonolithicElementViewProviding> elementViewProvider;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMonolithicElementViewProvider:(id)a0;

@end
