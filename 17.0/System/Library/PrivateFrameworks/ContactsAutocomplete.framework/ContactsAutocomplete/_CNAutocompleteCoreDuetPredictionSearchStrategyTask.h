@class CNContactStore, _CDPeopleSuggesterContext, NSArray, CNAutocompleteFetchRequest, _CDPeopleSuggesterSettings;

@interface _CNAutocompleteCoreDuetPredictionSearchStrategyTask : CNTask {
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
    NSArray *_results;
}

+ (long long)_addressTypeFromHandle:(id)a0;
+ (void)configureContext:(id)a0 withFetchRequest:(id)a1;
+ (void)configureSettings:(id)a0 withFetchRequest:(id)a1;
+ (id)constrainMechanismsForSearchType:(unsigned long long)a0;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (long long)addressTypeForCDContact:(id)a0;
- (void)convertResults;
- (id)initWithRequest:(id)a0 contactStore:(id)a1;
- (void)prepareQuery;
- (id)resultValueForCDContact:(id)a0;
- (void)runQuery;
- (id)suggesterContextForFetchRequest:(id)a0;
- (id)suggesterSettingsForFetchRequest:(id)a0;

@end
