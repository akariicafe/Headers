@class NSArray;
@protocol WFVariableSuggesterDelegate, WFVariableProvider;

@interface WFVariableSuggester : NSObject

@property (retain, nonatomic) NSArray *suggestedVariables;
@property (weak, nonatomic) id<WFVariableSuggesterDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (copy, nonatomic) NSArray *currentVariables;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *outputActions;
@property (nonatomic) unsigned long long maxSuggestionsCount;
@property (nonatomic) unsigned long long minSuggestionsCount;

- (id)init;
- (void).cxx_destruct;
- (void)availableVariablesDidChange;

@end
