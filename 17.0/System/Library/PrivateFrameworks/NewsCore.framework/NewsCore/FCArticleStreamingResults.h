@class FCArticleSearchOperationFeedbackResult;

@interface FCArticleStreamingResults : FCStreamingResults

@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult;

- (void).cxx_destruct;
- (void)fetchObjectsUpToCount:(unsigned long long)a0 qualityOfService:(long long)a1 batchSize:(unsigned long long)a2 completion:(id /* block */)a3;

@end
