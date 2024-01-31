@class ATXSuggestionLayout, NSMutableArray, UIStackView;
@protocol APUISuggestionsWidgetViewDelegate;

@interface APUISuggestionsWidgetView : UIView {
    ATXSuggestionLayout *_suggestionLayout;
    unsigned long long _platterSize;
    NSMutableArray *_containerViews;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<APUISuggestionsWidgetViewDelegate> delegate;

+ (id)_developerModeSuggestions:(unsigned long long)a0;
+ (BOOL)_shouldDisplayRecentDonationsOrUpcomingMediaForTesting;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_clearStackView;
- (void)_addFullWidthWidgetContainerViewWithSuggestion:(id)a0 withTopSeparator:(BOOL)a1;
- (id)_addWidgetContainerViewWithSuggestion:(id)a0 toVerticalStackView:(id)a1;
- (void)_checkOrLoadSuggestions:(id)a0 inDeveloperMode:(BOOL)a1 rowCount:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)_createWidgetContainerViewWithSuggestion:(id)a0;
- (void)_displayNoSuggestions;
- (BOOL)_hasBundleInstalledAndNotRestrictedForSuggestion:(id)a0;
- (void)_layout1x4WithRowCount:(unsigned long long)a0;
- (void)_layoutNotSupported:(long long)a0;
- (void)_layoutOne2x2;
- (void)_setupStackViewIfNecessary;
- (id)_validSuggestionsWithSuggestions:(id)a0;
- (void)addSeparatorViewToView:(id)a0;
- (void)highlightSuggestion:(id)a0;
- (void)logLayoutSuggestions:(id)a0;
- (id)suggestionAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateWithSuggestionLayout:(id)a0;

@end
