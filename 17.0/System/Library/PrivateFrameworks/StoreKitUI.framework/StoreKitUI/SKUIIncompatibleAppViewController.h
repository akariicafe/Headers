@class SKUIIncompatibleAppView, NSString, UIImage, SKUIProductPageItem, SSVLoadURLOperation, SKUIProductPageHeaderViewController, NSOperationQueue, SKUIItemArtworkContext, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {
    SKUIItemArtworkContext *_artworkContext;
    UIImage *_iconImage;
    SSVLoadURLOperation *_loadIconOperation;
    SKUIIncompatibleAppView *_incompatibleView;
}

@property (readonly, nonatomic) SKUIProductPageItem *incompatibleItem;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)reloadData;
- (void)loadView;
- (void).cxx_destruct;
- (id)_artworkContext;
- (void)_learnMoreAboutApp:(id)a0;
- (void)_learnMoreAboutIPad:(id)a0;
- (void)_setArtworkWithImage:(id)a0 error:(id)a1;
- (id)initWithIncompatibleItem:(id)a0;

@end
