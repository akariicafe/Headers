@class FCStreamingResults, NSString;
@protocol FCContentContext;

@interface FCUserFacingTagSearchOperation : FCOperation

@property (retain, nonatomic) FCStreamingResults *channelSearchResults;
@property (retain, nonatomic) FCStreamingResults *topicSearchResults;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long userFacingTagOptions;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) id /* block */ searchResultsBlock;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)_fetchResultsForTagType:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (id)_fetchResultsForUserFacingTopicsWithInitialChannels:(id)a0;

@end
