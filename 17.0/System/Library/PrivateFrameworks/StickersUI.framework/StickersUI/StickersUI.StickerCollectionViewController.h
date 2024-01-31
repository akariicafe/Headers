@interface StickersUI.StickerCollectionViewController : UICollectionViewController <AVTStickerRecentsSwiftProviderDelegate, UICollectionViewDataSourcePrefetching, UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ storeType;
    void /* unknown type, empty encoding */ editMenuInteraction;
    void /* unknown type, empty encoding */ isArranging;
    void /* unknown type, empty encoding */ allowsAnimation;
    void /* unknown type, empty encoding */ touchOffsetForMovingCell;
    void /* unknown type, empty encoding */ isShowingPhotosPicker;
    void /* unknown type, empty encoding */ placeholderImageView;
    void /* unknown type, empty encoding */ isStickerEffectPaused;
    void /* unknown type, empty encoding */ isPresentingEditMenu;
    void /* unknown type, empty encoding */ addingStickerIdentifier;
    void /* unknown type, empty encoding */ addingRecentStickerIdentifier;
    void /* unknown type, empty encoding */ hiddenStickerViewIdentifier;
    void /* unknown type, empty encoding */ hiddenStickerViewAnimationStartTime;
    void /* unknown type, empty encoding */ completionHandlerWaitingForStickerBound;
    void /* unknown type, empty encoding */ completionHandlerWaitingForStickerDisplay;
    void /* unknown type, empty encoding */ needsMenuPresentationStickerIdentifier;
    void /* unknown type, empty encoding */ addContextToRun;
    void /* unknown type, empty encoding */ animationContextImageView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerCache;
    void /* unknown type, empty encoding */ insertLocationMarker;
    void /* unknown type, empty encoding */ collectionLayout;
    void /* unknown type, empty encoding */ traitChangeRegistration;
    void /* unknown type, empty encoding */ transitionAnimator;
    void /* unknown type, empty encoding */ keyline;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)editMenuInteraction:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)handleLongPress:(id)a0;
- (void)handleTap:(id)a0;
- (void)avtStickerRecentRenderedWithIdentifier:(id)a0 localizedDescription:(id)a1 image:(id)a2 url:(id)a3 avatarRecordIdentifier:(id)a4 stickerConfigurationIdentifier:(id)a5;
- (void)avtStickerRecentStoreDidChange;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateContentUnavailableConfigurationUsingState:(id)a0;
- (void)handleStickerCreationProgressUpdateNotification:(id)a0;
- (void)makeStickerFromPhotoPicker;
- (void)photoPickerDidDismiss;

@end
