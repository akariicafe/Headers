@class SUUIProductPageHeaderView, SUUIContentRatingArtworkResourceLoader, SUUIProductPage, SUUIClientContext, SUUIItem, NSString, SUUIProductPageHeaderFloatingView, UIPopoverController, SSVLoadURLOperation, SUUIItemOffer, NSOperationQueue, SUUIItemArtworkContext, UIImage;
@protocol SUUIProductPageHeaderViewDelegate;

@interface SUUIProductPageHeaderViewController : UIViewController <SUUIItemStateCenterObserver, UIPopoverControllerDelegate> {
    UIPopoverController *_activityPopoverController;
    SUUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SUUIItemArtworkContext *_artworkContext;
    SUUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    long long _personalizationState;
    SUUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SUUIProductPage *_productPage;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
    SUUIProductPageHeaderFloatingView *_floatingView;
    BOOL _performArtistActionOnLoad;
}

@property (readonly, nonatomic) SUUIItem *item;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUIProductPageHeaderViewDelegate> delegate;
@property (nonatomic) BOOL askPermission;
@property (readonly, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long selectedSectionIndex;
@property (readonly, nonatomic) SUUIProductPageHeaderFloatingView *floatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)reloadData;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isRestricted;
- (id)initWithItem:(id)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (id)_activeItem;
- (id)_artworkContext;
- (void)setProductPage:(id)a0;
- (id)_ageBandString;
- (void)_artistButtonAction:(id)a0;
- (id)_contentRatingResourceLoader;
- (void)_destroyPopoverController;
- (void)_disableItemOfferButtonWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_itemOfferButtonAction:(id)a0;
- (void)_loadUberImageIfAvailable;
- (void)_reloadItemStateAnimated:(BOOL)a0;
- (void)_sectionControlAction:(id)a0;
- (id)_segmentedControlTitles;
- (void)_sendDidReloadOffer;
- (void)_setArtworkWithImage:(id)a0 error:(id)a1;
- (void)_setItemState:(id)a0 animated:(BOOL)a1;
- (void)_setPersonalizedOffer:(id)a0;
- (void)_setUberWithImage:(id)a0 error:(id)a1;
- (void)_shareButtonAction:(id)a0;
- (void)_showActivityViewControllerFromView:(id)a0;
- (void)_showAskPermissionBanner;
- (void)_showSynthesizedItemStateWithFlag:(unsigned long long)a0 animated:(BOOL)a1;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)itemStateCenterRestrictionsChanged:(id)a0;

@end
