@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject {
    unsigned long long _urgency;
    NSMutableDictionary *_urgencies;
}

- (void).cxx_destruct;
- (void)recomputeUrgency;

@end
