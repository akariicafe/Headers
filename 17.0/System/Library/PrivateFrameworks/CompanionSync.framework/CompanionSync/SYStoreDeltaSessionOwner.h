@class NSArray;

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {
    NSArray *_changes;
    unsigned long long _currentIdx;
}

@property (readonly, nonatomic) unsigned long long changeCount;

- (id)initWithChanges:(id)a0;
- (void).cxx_destruct;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;

@end
