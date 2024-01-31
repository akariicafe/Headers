@class _PASLazyPurgeableResult, _PASCFBurstTrie, NSString;

@interface PPSentimentGuardedData : NSObject {
    _PASCFBurstTrie *_tokenWeightTrie;
    _PASLazyPurgeableResult *_tokenizer;
    NSString *_abGroupIdentifier;
}

- (void).cxx_destruct;

@end
