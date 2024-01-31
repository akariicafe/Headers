@class NSObject;
@protocol PPSocialHighlightScorer;

@interface PPSocialHighlightRanker : NSObject {
    NSObject<PPSocialHighlightScorer> *_firstPassScorer;
    NSObject<PPSocialHighlightScorer> *_topKScorer;
    unsigned int _topKCount;
}

- (id)init;
- (id)initWithFirstPassScorer:(id)a0 topKScorer:(id)a1 topKCount:(unsigned int)a2;
- (void).cxx_destruct;
- (id)rankSocialHighlights:(id)a0 client:(id)a1 performRerank:(BOOL)a2;
- (id)rerankSocialHighlightsForTopOneResult:(id)a0 client:(id)a1;

@end
