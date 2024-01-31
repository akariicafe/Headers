@class CompletionArrowView;

@interface SearchSuggestionTableViewCell : CompletionListTableViewCell {
    CompletionArrowView *_accessoryView;
}

@property (nonatomic) BOOL hidesImage;
@property (nonatomic) BOOL hidesAccessoryView;
@property (copy, nonatomic) id /* block */ accessoryActionHandler;
@property (nonatomic) BOOL usesDownBackwardCompletionArrow;

+ (id)_matchedTextAttributes;
+ (id)_suggestedTextAttributes;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_accessoryButtonTapped:(id)a0;
- (void)setSearchSuggestion:(id)a0 withQuery:(id)a1;

@end
