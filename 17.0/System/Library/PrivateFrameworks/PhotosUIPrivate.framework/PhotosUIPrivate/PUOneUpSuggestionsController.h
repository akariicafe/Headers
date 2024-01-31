@class PUAssetReference, NSMutableDictionary, PUOneUpSuggestionsProvider, NSString, PUBrowsingViewModel;
@protocol PUOneUpSuggestionsControllerDelegate;

@interface PUOneUpSuggestionsController : NSObject <PUBrowsingViewModelChangeObserver> {
    BOOL _willPerformUpdates;
    BOOL _isPerformingUpdates;
    struct { BOOL focusedAssetReference; BOOL focusedLongEnough; BOOL activeSuggestionsWindow; } _needsUpdateFlags;
    struct { BOOL suggestionAvailable; BOOL canShowSuggestion; } _delegateRespondsTo;
}

@property (nonatomic, getter=isInFocus) BOOL inFocus;
@property (retain, nonatomic) PUAssetReference *focusedAssetReference;
@property (nonatomic) double lastFocusedAssetReferenceChangeTime;
@property (nonatomic, getter=isFocusedLongEnough) BOOL focusedLongEnough;
@property (readonly, nonatomic) NSMutableDictionary *suggestionInfos;
@property (readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider;
@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (weak, nonatomic) id<PUOneUpSuggestionsControllerDelegate> delegate;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeSuggestionInfoForAssetReference:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)_updateInFocus;
- (void)invalidateLayoutForAssetReference:(id)a0;
- (BOOL)_needsUpdate;
- (void)_invalidateInFocus;
- (void)_invalidateFocusedLongEnough;
- (void)_dismissSuggestionInfo:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateSuggestionsVisibility;
- (void)_updateFocusedLongEnoughIfNeeded;
- (void).cxx_destruct;
- (void)_updateSuggestions;
- (void)_requestSuggestionForAssetReference:(id)a0;
- (void)_handleDataSourceChange:(id)a0;
- (void)_invalidateFocusedAssetReference;
- (void)_invalidateActiveSuggestionsWindow;
- (void)invalidateSuggestions;
- (BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)a0;
- (BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)a0;
- (id)initWithSuggestionsProvider:(id)a0 browsingViewModel:(id)a1;
- (id)_suggestionInfoForAssetReference:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (void)_handleSuggestionForAssetReference:(id)a0;
- (void)invalidateLayout;
- (void)_updateActiveSuggestionsWindowIfNeeded;

@end
