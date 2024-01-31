@class UIPageControl, NSString, SUUIGiftThemeCollectionView, SUUIClientContext, NSOperationQueue, NSMutableArray, NSMutableDictionary;
@protocol SUUISlideshowViewControllerDataSource, SUUISlideshowViewControllerDelegate;

@interface SUUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SUUIGiftThemeCollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    long long _indexToScrollToOnLoadView;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUISlideshowViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<SUUISlideshowViewControllerDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_doneAction:(id)a0;
- (id)_imageAtIndex:(long long)a0;
- (id)_placeholderImageAtIndex:(long long)a0;
- (void)_reloadPageControl;
- (void)_reloadSize;
- (void)_setImage:(id)a0 atIndex:(long long)a1;

@end
