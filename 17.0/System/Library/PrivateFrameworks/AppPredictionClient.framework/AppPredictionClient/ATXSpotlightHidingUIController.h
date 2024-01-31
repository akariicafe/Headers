@interface ATXSpotlightHidingUIController : NSObject

+ (id)normalizedIdentifier:(id)a0;

- (id)_actionTypeButtonItemWithBundleIdentifier:(id)a0;
- (id)_actionTypeButtonItemWithExecutableIdentifier:(id)a0;
- (void)_addHideContextButtonItemForSearchResult:(id)a0 toButtonItems:(id)a1;
- (void)_addHidingPreviewButtonItemsToSearchResult:(id)a0;
- (void)_addSwipeButtonItemToCardSection:(id)a0 previewButtonItems:(id)a1;
- (BOOL)_contextHasBeenHiddenForSearchResult:(id)a0 adapter:(id)a1 feedbackManager:(id)a2;
- (id)_contextIdentifierWithPredictionReasons:(unsigned long long)a0;
- (id)_entityButtonItemWithWithSearchEntity:(id)a0;
- (id)_excludedFronHindingExecutableidentifiers;
- (id)_hideActionTitleWithBundleIdentifier:(id)a0;
- (id)_hideActionTitleWithExecutableIdentifier:(id)a0;
- (id)_hideContextActionTitleWithContextIdentifier:(id)a0;
- (id)_hideContextButtonItemWithContextIdentifier:(id)a0;
- (id)_hideContextButtonItemWithReasons:(unsigned long long)a0;
- (id)_hideContextSymbolImageWithContextIdentifier:(id)a0;
- (id)_hideWebsiteButtonItemWithIdentifier:(id)a0;
- (id)_hidingCommandButtonItemWithIdentifier:(id)a0 title:(id)a1 symbolName:(id)a2 isAction:(BOOL)a3;
- (id)_hidingPreviewButtonItemsWithBundleIdentifier:(id)a0 context:(unsigned long long)a1;
- (id)_hidingPreviewButtonItemsWithExecutableIdentifier:(id)a0 context:(unsigned long long)a1;
- (id)_hidingPreviewButtonItemsWithSearchResult:(id)a0 entity:(id)a1;
- (id)_hidingPreviewButtonItemsWithSearchResult:(id)a0 queryTopic:(id)a1;
- (id)_hidingPreviewButtonItemsWithURL:(id)a0 identifier:(id)a1 context:(unsigned long long)a2;
- (id)_identifierWithEntity:(id)a0;
- (id)_identifierWithSearchResult:(id)a0;
- (id)_identifierWithSuggestion:(id)a0;
- (BOOL)_isExecutableIdentifierRecognized:(id)a0;
- (id)_localizableKeyWithExecutableIdentifier:(id)a0;
- (id)_localizedTitleWithQueryTopic:(id)a0;
- (id)_nameWithNearbySuggestionIdentifier:(id)a0;
- (id)_nearbySuggestionIdentifierWithName:(id)a0;
- (BOOL)_shouldAddHidingButtonItemForContextIdentifier:(id)a0;
- (BOOL)_shouldAddHidingButtonItemForExecutableIdentifier:(id)a0;
- (id)_subMenuButtonItemWithItems:(id)a0;
- (id)_symbolNameWithQueryTopic:(id)a0;
- (void)addHidingPreviewButtonItemsToServerResultSections:(id)a0;
- (BOOL)shouldHideSearchResult:(id)a0;

@end
