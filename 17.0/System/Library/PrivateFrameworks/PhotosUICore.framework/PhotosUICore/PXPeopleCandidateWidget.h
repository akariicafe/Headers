@class NSObject, PXAssetActionManager, UIView, PXPeopleSuggestionDataSource, NSString, _PXPeopleCandidateWidgetContainerView, PXPhotosDetailsContext, PHPerson, PXWidgetSpec, PXTilingController, PXOneUpPresentation, PXSectionedSelectionManager, PXPhotosGridPeopleBannerProvider;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXPhotosBannerView, OS_os_log, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate, OS_dispatch_queue;

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXPhotosBannerInvalidationDelegate, PXPhotosBannerPresentationDelegate, PXPhotoLibraryUIChangeObserver, PXUIWidget> {
    long long _contentLoadGeneration;
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) PXPeopleSuggestionDataSource *dataSource;
@property (retain, nonatomic) _PXPeopleCandidateWidgetContainerView *contentView;
@property (retain, nonatomic) UIView<PXPhotosBannerView> *bannerView;
@property (retain, nonatomic) PXPhotosGridPeopleBannerProvider *bannerProvider;
@property (retain, nonatomic) PHPerson *singleAssetPerson;
@property (nonatomic) long long loadState;
@property (nonatomic) BOOL hasLoadedContentData;
@property (nonatomic) BOOL loadPeopleFromFirstAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL wantsNoSpaceAfterContentBottom;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double x0; double x1; } maxVisibleSizeInEditMode;

+ (id)_fetchPersonForAsset:(id)a0;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void).cxx_destruct;
- (void)loadContentData;
- (double)preferredContentHeightForWidth:(double)a0;
- (void)_didLoadBannerView:(id)a0 forGeneration:(long long)a1;
- (void)_loadBannerProviderWithPerson:(id)a0 generation:(long long)a1 isAssetLoad:(BOOL)a2;
- (void)_requestPersonForAsset:(id)a0 withCompletion:(id /* block */)a1;
- (void)controllerTraitCollectionDidChangeFrom:(id)a0 to:(id)a1;
- (void)photosBannerProviderInvalidateLoadedBanner:(id)a0;
- (id)presentationEnvironmentForPhotosBannerProvider:(id)a0;
- (void)unloadContentData;

@end
