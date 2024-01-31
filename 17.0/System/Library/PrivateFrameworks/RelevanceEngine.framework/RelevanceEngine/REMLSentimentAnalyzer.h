@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {
    REContentRanker *_contentRanker;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentRanker:(id)a0;
- (id)sentimentForText:(id)a0;
- (id)sentimentForTokens:(id)a0;

@end
