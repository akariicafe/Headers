@class BPSPublisher, NSMutableDictionary;

@interface ATXCachedCandidateCounter : NSObject {
    BPSPublisher *_publisher;
    NSMutableDictionary *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (void)populateCache;
- (long long)countForCandidate:(id)a0;
- (id)initWithCandidateIdPublisher:(id)a0;

@end
