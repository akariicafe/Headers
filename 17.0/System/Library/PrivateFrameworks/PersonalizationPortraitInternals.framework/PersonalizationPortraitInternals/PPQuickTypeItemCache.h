@class NSMutableDictionary, NSMutableOrderedSet;

@interface PPQuickTypeItemCache : NSObject {
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}

- (id)init;
- (void)setEntry:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
