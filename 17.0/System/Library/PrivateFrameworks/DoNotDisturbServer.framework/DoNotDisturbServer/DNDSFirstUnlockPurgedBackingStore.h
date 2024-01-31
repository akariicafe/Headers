@class NSString;
@protocol DNDSCachedBackingStore, DNDSKeybagStateProviding, DNDSCachedBackingStoreDelegate;

@interface DNDSFirstUnlockPurgedBackingStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSKeybagStateObserver, DNDSCachedBackingStore> {
    id<DNDSCachedBackingStore> _underlyingBackingStore;
    id<DNDSKeybagStateProviding> _keybag;
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
- (void)cachedBackingStoreDidPurgeCache:(id)a0;
- (void).cxx_destruct;
- (id)readRecordWithError:(id *)a0;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (id)initWithUnderlyingBackingStore:(id)a0 keybag:(id)a1;

@end
