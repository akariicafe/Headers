@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController

@property (copy, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController;
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing;

+ (BOOL)canOpenURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)requestRemoteViewController;
- (id)initWithArticleID:(id)a0;
- (id)initWithArticleIDs:(id)a0;
- (void)setupRemoteViewController:(id)a0;

@end
