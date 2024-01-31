@class SUUISlideshowViewController, NSString, SUUIIPhoneSlideshowViewController, NSMutableArray, SUUIViewElementLayoutContext;
@protocol SUUIViewElementSlideshowDelegate;

@interface SUUIViewElementSlideshowController : NSObject <SUUISlideshowViewControllerDataSource, SUUISlideshowViewControllerDelegate> {
    NSMutableArray *_lockups;
    SUUISlideshowViewController *_padViewController;
    SUUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property (retain, nonatomic) NSMutableArray *dataConsumers;
@property (weak, nonatomic) id<SUUIViewElementSlideshowDelegate> delegate;
@property (retain, nonatomic) SUUIViewElementLayoutContext *layoutContext;
@property (readonly, nonatomic) long long numberOfSlideshowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithShelf:(id)a0 selectedLockup:(id)a1;
- (long long)numberOfItemsInSlideshowViewController:(id)a0;
- (void)presentFromParentViewController:(id)a0;
- (id)slideshowViewController:(id)a0 dataConsumerAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 imageURLAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 placeholderImageAtIndex:(long long)a1;
- (void)slideshowViewControllerDidFinish:(id)a0;

@end
