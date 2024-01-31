@class UIView, NSString, PNPersonSuggestion, PXPhotosGridUnnamedPersonBannerView, PHPerson, PXPeopleSuggestionDataSource, NSObject, PXPeopleCandidateBannerView;
@protocol PXPhotosBannerPresentationDelegate, PXPhotosBannerInvalidationDelegate, PXPhotosBannerView, OS_os_log, OS_dispatch_queue;

@interface PXPhotosGridPeopleBannerProvider : NSObject <PXPeopleCandidateBannerViewDelegate, PXPhotosGridUnnamedPersonBannerDelegate, PXPhotosBannerProvider> {
    PXPeopleCandidateBannerView *_loadedSuggestionBannerView;
    PXPhotosGridUnnamedPersonBannerView *_loadedAddNameBannerView;
    PXPeopleSuggestionDataSource *_reviewFacesDataSource;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _currentBannerType;
    PNPersonSuggestion *_currentSuggestion;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) UIView<PXPhotosBannerView> *loadedBannerView;
@property (retain, nonatomic) PHPerson *person;
@property (readonly, nonatomic, getter=isDismissed) BOOL dismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosBannerInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosBannerPresentationDelegate> presentationDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (void)_workQueue_loadBannerIfNeededHasDismissedSuggestion:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadBannerView:(id /* block */)a0;
- (id)_analyticsBannerEventPayloadForSuggestion:(id)a0 eventType:(long long)a1;
- (void)_applySuggestedContactForBanner:(id)a0;
- (void)_applySuggestedNameForBanner:(id)a0;
- (void)_dismissBanner;
- (void)_dismissBannerIfNecessary;
- (id)_fetchAutonamingSuggestion;
- (BOOL)_isAllowedSuggestion:(id)a0;
- (id)_loadAddNameBannerView;
- (id)_loadContactSuggestionBannerForContact:(id)a0 isMe:(BOOL)a1;
- (id)_loadNameSuggestionBannerForName:(id)a0;
- (id)_loadReviewFacesBannerForDataSource:(id)a0;
- (void)_persistNegativeUserFeedback:(id)a0;
- (void)_runReviewFacesFlow;
- (void)_setSuggestionBannerView:(id)a0 addNameBannerView:(id)a1;
- (void)_suggestionsDidFinish:(id)a0;
- (BOOL)_workQueue_isMeContactWithIdentifier:(id)a0;
- (void)_workQueue_loadContactSuggestionBannerForContactIdentifier:(id)a0 suggestion:(id)a1 withCompletion:(id /* block */)a2;
- (void)bannerViewDidSelectNotNow:(id)a0;
- (void)bannerViewDidSelectPrimaryAction:(id)a0;
- (void)didTapUnnamedPersonBanner:(id)a0;

@end
