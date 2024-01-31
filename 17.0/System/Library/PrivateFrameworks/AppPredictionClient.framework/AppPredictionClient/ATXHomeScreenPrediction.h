@class NSString, NSArray, NSDictionary;

@interface ATXHomeScreenPrediction : NSObject {
    NSDictionary *_suggestions;
}

@property (readonly, nonatomic) NSString *blendingCacheId;
@property (readonly, nonatomic) NSArray *stacksAffectedByDebugRotation;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionForStackIdentifier:(id)a0;
- (id)suggestionsForAllStacks;
- (id)initWithBlendingCacheIdentifier:(id)a0 widgetSuggestions:(id)a1 stacksAffectedByDebugRotation:(id)a2;

@end
