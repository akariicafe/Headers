@class _PASBloomFilterForWriting;

@interface PPECRMessageTermCountsPluginGuardedData : NSObject {
    _PASBloomFilterForWriting *_streamContentBloomFilter;
    unsigned long long _eventCount;
}

- (id)init;
- (void).cxx_destruct;

@end
