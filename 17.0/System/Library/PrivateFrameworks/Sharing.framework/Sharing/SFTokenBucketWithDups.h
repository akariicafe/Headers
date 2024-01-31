@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray { } *_dups;
}

- (id)init;
- (void)dealloc;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithBucket:(id)a0 dupHistoryLength:(unsigned long long)a1;

@end
