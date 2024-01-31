@class SUUIProductPageTableHeaderOnlySection, NSString, SUUIProductPageHeaderViewController, SUUIClientContext, SUUIProductPage, NSOperationQueue, SUUILayoutCache, SUUIProductPageTableTextBoxSection, SUUIResourceLoader, NSMutableArray, SUUIProductPageTableViewController, UIScrollView;
@protocol SUUIProductPageChildViewControllerDelegate;

@interface SUUIProductPageDetailsViewController : UIViewController <SUUIScreenshotsDelegate, SUUIItemStateCenterObserver, SUUITableViewSectionDelegate, SUUIProductPageChildViewController> {
    SUUIProductPageTableHeaderOnlySection *_copyrightSection;
    SUUIProductPageTableTextBoxSection *_descriptionSection;
    SUUIResourceLoader *_resourceLoader;
    SUUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SUUIProductPageTableTextBoxSection *_storeNotesSection;
    SUUIProductPageTableViewController *_tableViewController;
    SUUILayoutCache *_textLayoutCache;
    SUUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property (readonly, nonatomic) SUUIProductPage *productPage;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL askPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SUUIProductPageChildViewControllerDelegate> delegate;

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
