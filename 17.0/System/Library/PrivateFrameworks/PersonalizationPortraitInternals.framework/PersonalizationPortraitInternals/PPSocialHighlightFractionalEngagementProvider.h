@class NSMutableDictionary;

@interface PPSocialHighlightFractionalEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary *_engagementsByKey;
    NSMutableDictionary *_offeredByKey;
    id /* block */ _groupByBlock;
    id /* block */ _keyBlock;
}

- (id)initWithFeedbackGroupByBlock:(id /* block */)a0 highlightKeyBlock:(id /* block */)a1 highlights:(id)a2;
- (void).cxx_destruct;
- (id)valueForHighlight:(id)a0;
- (id)applyFeedback:(id)a0;

@end
