@class NSString;

@interface MapsSuggestionsFeatureFlagCondition : MapsSuggestionsBaseCondition {
    NSString *_featureFlag;
}

- (BOOL)isTrue;
- (void).cxx_destruct;
- (id)initWithFeatureFlag:(id)a0;

@end
