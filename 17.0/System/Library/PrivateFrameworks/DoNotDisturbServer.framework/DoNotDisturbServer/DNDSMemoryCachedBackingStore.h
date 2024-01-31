@class NSString;
@protocol DNDSBackingStoreRecord, DNDSBackingStore, DNDSCachedBackingStoreDelegate;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSCachedBackingStore> {
    id<DNDSBackingStore> _underlyingBackingStore;
    id<DNDSBackingStoreRecord> _cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSCachedBackingStoreDelegate> delegate;

- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (void)purgeCache;
- (unsigned long long)writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)readRecordWithError:(id *)a0;
- (id)initWithUnderlyingBackingStore:(id)a0;

@end
