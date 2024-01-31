@class NSString, UIImage, SUUIClientContext, SUUIBannerView, NSOperationQueue, NSDictionary, SUUIItemArtworkContext, NSMutableArray, SUUIItemStateCenter, SSLookupItem;
@protocol SUUIBannerViewDelegate;

@interface SUUIBannerViewController : UIViewController <SUUIItemStateCenterObserver> {
    SUUIBannerView *_bannerView;
    UIImage *_iconImage;
    SSLookupItem *_item;
    long long _itemIdentifier;
    SUUIItemStateCenter *_itemStateCenter;
    NSMutableArray *_screenshotImages;
    SUUIItemArtworkContext *_itemArtworkContext;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUIBannerViewDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *resourceOperationQueue;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_finishWithResponse:(id)a0 error:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)_iconImage;
- (id)_itemState;
- (void)_setIcon:(id)a0 error:(id)a1;
- (void)_bannerViewAction:(id)a0;
- (void)_closeButtonAction:(id)a0;
- (id)_itemArtworkContext;
- (void)_launchApp;
- (void)_launchURL:(id)a0 withBundleIdentifier:(id)a1;
- (void)_loadImages;
- (void)_reloadBannerView;
- (id)_screenshotConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setScreenshot:(id)a0 forIndex:(long long)a1 error:(id)a2;
- (void)_warmItemStateCenter;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)loadWithProductParameters:(id)a0 mainDocumentURL:(id)a1;

@end
