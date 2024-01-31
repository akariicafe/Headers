@class NSMutableDictionary, NSDate;

@interface PPSocialHighlightEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary *_engagementsByKey;
    unsigned long long _feedbackType;
    id /* block */ _groupByBlock;
    id /* block */ _keyBlock;
    NSDate *_earliestDateToAccept;
    BOOL _acceptOnlyPrimary;
}

- (id)initWithFeedbackType:(unsigned long long)a0 feedbackGroupByBlock:(id /* block */)a1 highlightKeyBlock:(id /* block */)a2 highlights:(id)a3;
- (id)initWithFeedbackType:(unsigned long long)a0 feedbackGroupByBlock:(id /* block */)a1 highlightKeyBlock:(id /* block */)a2 intervalSinceNow:(double)a3 highlights:(id)a4;
- (void).cxx_destruct;
- (id)valueForHighlight:(id)a0;
- (id)applyFeedback:(id)a0;

@end
