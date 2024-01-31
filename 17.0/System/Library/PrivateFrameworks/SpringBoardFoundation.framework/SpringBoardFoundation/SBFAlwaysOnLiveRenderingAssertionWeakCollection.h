@class NSHashTable;

@interface SBFAlwaysOnLiveRenderingAssertionWeakCollection : NSObject {
    NSHashTable *_assertions;
}

- (void)addAssertion:(id)a0;
- (void)removeAll;
- (id)init;
- (void)removeAssertion:(id)a0;
- (long long)count;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)invalidateAll;
- (id)mostRecentlyCreatedValidAssertion;

@end
