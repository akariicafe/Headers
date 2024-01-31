@class NSArray, NSHashTable;

@interface SBSwitcherDemoFilteringController : NSObject {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
