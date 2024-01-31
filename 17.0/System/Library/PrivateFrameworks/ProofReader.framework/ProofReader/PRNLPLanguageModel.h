@class NSString, NSMutableDictionary, NLLanguageModel, NSMutableArray, NLLanguageModelSession;

@interface PRNLPLanguageModel : NSObject {
    NLLanguageModel *_model;
    NLLanguageModelSession *_session;
    NSMutableDictionary *_cachedStates;
    NSMutableArray *_cachedContextsRecycleQueue;
}

@property (readonly, nonatomic) NSString *localization;
@property (readonly) long long modelType;

+ (id)languageModelWithLocalization:(id)a0 type:(long long)a1;

- (void)dealloc;
- (id)description;
- (id)stateWithContext:(id)a0;
- (BOOL)getConditionalProbabilityForString:(id)a0 context:(id)a1 probability:(double *)a2;
- (id)initWithLocalization:(id)a0 type:(long long)a1;
- (id)modelOptionsForLocale:(id)a0 type:(long long)a1;
- (BOOL)stringIsBlocklisted:(id)a0;

@end
