@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

@property (nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)a0;

@end
