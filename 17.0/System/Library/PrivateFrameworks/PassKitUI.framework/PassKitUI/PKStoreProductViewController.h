@class NSString;
@protocol SKStoreProductViewControllerDelegate;

@interface PKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {
    BOOL _suppressingFooter;
}

@property (weak, nonatomic) id<SKStoreProductViewControllerDelegate> productDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithItemIdentifier:(id)a0;
- (void)setSupressingFooter:(BOOL)a0;

@end
