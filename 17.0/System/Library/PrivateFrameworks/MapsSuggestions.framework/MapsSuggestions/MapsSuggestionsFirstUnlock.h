@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)init;
- (BOOL)hasDeviceBeenUnlocked;
- (void)protectedDataDidBecomeAvailable:(id)a0;

@end
