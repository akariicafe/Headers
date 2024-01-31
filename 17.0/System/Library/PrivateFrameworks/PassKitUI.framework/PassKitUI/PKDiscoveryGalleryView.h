@class NSString, NSArray, UIImage, PKDiscoveryCardView, PKDiscoveryCardViewTemplateInformation, PKDiscoveryDataSource, NSMutableArray, UIPageControl, UIScrollView;
@protocol PKPGSVSectionSubheaderDelegate;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, PKDiscoveryArticleViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView> {
    NSMutableArray *_cardViews;
    NSArray *_displayedCardViews;
    NSMutableArray *_discoveryCardViews;
    id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
    PKDiscoveryCardView *_passWelcomeView;
    PKDiscoveryCardView *_paymentWelcomeView;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    UIImage *_dismissImage;
    unsigned long long _pendingDeletes;
    struct { struct { struct { unsigned char hasPayment : 1; unsigned char hasBarcode : 1; } welcome; unsigned char hasDiscovery : 1; } cards; unsigned char barcodePassWelcomeCardIsDismissable : 1; } _layoutState;
    BOOL _cardSizeStateIsDirty;
    NSString *_lastReportedDiscoveryItemIdentifier;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundState;
    double _lastTimeForegroundActive;
    BOOL _articleLayoutsUpdatedAfterEnteringForegroundActive;
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;
    PKDiscoveryCardViewTemplateInformation *_welcomeCardTemplateInformation;
    unsigned char _visibilityState;
}

@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard;
@property (retain, nonatomic) PKDiscoveryDataSource *dataSource;
@property (readonly, nonatomic) NSString *frontmostItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; })_welcomeStateForState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0;
+ (BOOL)isVisibleForSectionsState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0 dataSource:(id)a1;
+ (BOOL)isWelcomeCardVisibleForSectionsState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0;
+ (id)passWelcomeCardMessageAttributedString;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)dealloc;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (struct CGSize { double x0; double x1; })_contentSize;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)scrollType;
- (void)_appStorePressed;
- (struct CGSize { double x0; double x1; })_cardSize;
- (id)_createPassWelcomeCardView;
- (id)_createPaymentWelcomeCardView;
- (unsigned long long)_indexForCardViewWithIdentifier:(id)a0;
- (void)_pageControlChanged:(id)a0;
- (void)_removeCardView:(id)a0 animated:(BOOL)a1;
- (void)_reportCurrentDiscoveryCardToDiscoveryService;
- (BOOL)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
- (void)_scanCodePressed;
- (void)_updateCardSizeIfNecessary;
- (void)_updateCardViews;
- (void)_updateCardViewsAnimated:(BOOL)a0;
- (void)_updateCardViewsAnimated:(BOOL)a0 overrideFrontmostCardToIdentifier:(id)a1;
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)a0 overrideFrontmostCardToIdentifier:(id)a1 animated:(BOOL)a2;
- (void)_updatePageControlVisibilityWithDelay:(double)a0;
- (void)_updatePageControlWithDisplayIndex;
- (void)_updateScrollViewToCardIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (id)cardViewForCardWithItemIdentifier:(id)a0;
- (void)discoveryArticleViewController:(id)a0 tappedCallToAction:(id)a1 item:(id)a2;
- (void)discoveryCardViewCTATapped:(id)a0 callToAction:(id)a1 itemIdentifier:(id)a2;
- (void)discoveryCardViewRemoveTapped:(id)a0;
- (void)discoveryCardViewTapped:(id)a0;
- (unsigned long long)displayIndex;
- (id)initWithCardTemplateInformation:(id)a0;
- (BOOL)needsRemoval;
- (void)setSectionsState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0;
- (void)setSubheaderDelegate:(id)a0;
- (void)updateArticleLayouts:(id)a0;
- (void)updatePageControlFrame;

@end
