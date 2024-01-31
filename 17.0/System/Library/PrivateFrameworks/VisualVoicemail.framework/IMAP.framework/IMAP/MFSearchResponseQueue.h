@class NSMutableIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
    unsigned int limit;
}

@property (readonly, retain, nonatomic) NSMutableIndexSet *indexSet;

- (id)init;
- (void)dealloc;
- (BOOL)flush;
- (BOOL)addItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)flagsForItem:(id)a0;
- (unsigned long long)uidForItem:(id)a0;

@end
