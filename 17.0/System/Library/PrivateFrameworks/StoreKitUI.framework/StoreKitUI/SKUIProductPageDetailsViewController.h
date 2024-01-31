@class SKUIProductPage, NSString, SKUIResourceLoader, SKUILayoutCache, SKUIClientContext, NSOperationQueue, SKUIProductPageHeaderViewController, SKUIProductPageTableTextBoxSection, NSMutableArray, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableViewController, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController> {
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property (readonly, nonatomic) SKUIProductPage *productPage;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)a0;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_tableViewController;
- (id)_resourceLoader;
- (id)_descriptionSection;
- (void)_expandSection:(id)a0;
- (void)_addTapRecognizerForView:(id)a0 action:(SEL)a1;
- (id)_bundledAppsSection;
- (void)_configureSwooshSection:(id)a0;
- (id)_copyrightSection;
- (id)_featuresSection;
- (id)_infoSection;
- (id)_parentBundlesSection;
- (id)_screenshotsSection;
- (id)_storeNotesSection;
- (id)_textLayoutRequestWithText:(id)a0 widthOffset:(double)a1;
- (id)_whatsNewSection;
- (id)initWithProductPage:(id)a0;
- (void)itemStateCenterRestrictionsChanged:(id)a0;
- (void)screenshotsWillBeginDragging:(id)a0;
- (id)tableViewForTableViewSection:(id)a0;

@end
