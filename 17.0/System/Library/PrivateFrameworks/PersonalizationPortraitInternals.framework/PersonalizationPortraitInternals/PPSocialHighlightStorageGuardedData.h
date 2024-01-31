@class _PASBloomFilterForWriting, BMSocialHighlightFeedbackStream;

@interface PPSocialHighlightStorageGuardedData : NSObject {
    BMSocialHighlightFeedbackStream *feedbackStream;
    _PASBloomFilterForWriting *_feedbackStreamBloomFilter;
    unsigned long long _countOfEventsInBloomFilter;
}

- (void).cxx_destruct;

@end
