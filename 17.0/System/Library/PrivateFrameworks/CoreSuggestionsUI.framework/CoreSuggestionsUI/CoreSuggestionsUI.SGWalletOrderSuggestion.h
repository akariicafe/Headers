@interface CoreSuggestionsUI.SGWalletOrderSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ orderHelpers;
    void /* unknown type, empty encoding */ orderBundleURL;
    void /* unknown type, empty encoding */ orderDictionary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ realtimeOrderSuggestion;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (long long)suggestionActionButtonType;
- (id)suggestionAttributedSubtitle;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)initWithRealtimeWalletOrder:(id)a0;
- (id)realtimeSuggestion;

@end
