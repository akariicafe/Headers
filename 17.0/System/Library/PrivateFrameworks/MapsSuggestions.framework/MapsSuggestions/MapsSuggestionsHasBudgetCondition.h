@class MapsSuggestionsBudget;

@interface MapsSuggestionsHasBudgetCondition : MapsSuggestionsBaseCondition {
    MapsSuggestionsBudget *_budget;
}

- (BOOL)isTrue;
- (void).cxx_destruct;
- (id)initWithBudget:(id)a0;

@end
