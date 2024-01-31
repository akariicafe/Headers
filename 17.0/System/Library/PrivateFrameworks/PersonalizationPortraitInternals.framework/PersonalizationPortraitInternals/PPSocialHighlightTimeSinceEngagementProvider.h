@class NSMutableDictionary;

@interface PPSocialHighlightTimeSinceEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary *_dates;
    id /* block */ _keyBlock;
    id /* block */ _groupByBlock;
    unsigned long long _feedbackType;
    BOOL _mostRecent;
}

- (id)initWithFeedbackType:(unsigned long long)a0 feedbackGroupByBlock:(id /* block */)a1 highlightKeyBlock:(id /* block */)a2 mostRecent:(BOOL)a3 highlights:(id)a4;
- (void).cxx_destruct;
- (id)valueForHighlight:(id)a0;
- (id)applyFeedback:(id)a0;

@end
