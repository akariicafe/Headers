@protocol _PKEnterCurrencyWithSuggestionsTextFieldDataSource;

@interface _PKEnterCurrencyWithSuggestionsTextField : UITextField

@property (weak, nonatomic) id<_PKEnterCurrencyWithSuggestionsTextFieldDataSource> suggestionsDataSource;

- (void)setInputDelegate:(id)a0;
- (void)insertTextSuggestion:(id)a0;
- (void).cxx_destruct;

@end
