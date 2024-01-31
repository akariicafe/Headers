@class SKUIStorePageViewController, NSString, NSURL, NSData, SSVLoadURLOperation, SKUICategoryController;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)reloadData;
- (id)initWithData:(id)a0 fromOperation:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)_storePageViewController;
- (id)_categoryController;
- (void)_finishLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_reloadNavigationItem;
- (id)activeMetricsController;
- (void)categoryController:(id)a0 didSelectCategory:(id)a1;

@end
