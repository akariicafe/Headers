@class ATXAmbientSuggestionProvider, NSArray, SBIconListModel, SBHIconManager;
@protocol AMUIProactiveSuggestionsProviderDelegate;

@interface AMUIProactiveSuggestionsProvider : NSObject <ATXAmbientSuggestionProviderDelegate> {
    ATXAmbientSuggestionProvider *_proactiveClient;
    SBIconListModel *_iconListModel;
    SBHIconManager *_iconManager;
}

@property (retain, nonatomic) NSArray *currentPredictions;
@property (weak, nonatomic) id<AMUIProactiveSuggestionsProviderDelegate> delegate;

- (id)_iconDataSourceInIcon:(id)a0 withUniqueIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 widgetKind:(id)a3 suggestionSource:(long long)a4;
- (id)_makeDataSourceForAtxWidget:(id)a0;
- (void).cxx_destruct;
- (void)processUpdatedPredictions:(id)a0;
- (id)initWithIconListModel:(id)a0 iconManager:(id)a1 proactiveClient:(id)a2;
- (id)suggestionForStackIdentifier:(id)a0 amongSuggestions:(id)a1;
- (void)suggestionProvider:(id)a0 didUpdateStackSuggestions:(id)a1;

@end
