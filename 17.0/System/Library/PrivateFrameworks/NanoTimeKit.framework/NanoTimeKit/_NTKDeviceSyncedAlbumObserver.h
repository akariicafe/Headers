@class NSString, NSHashTable, NPTOCollectionTargetLibrary, NRDevice;

@interface _NTKDeviceSyncedAlbumObserver : NSObject <NPTOCollectionTargetLibraryObserver> {
    NPTOCollectionTargetLibrary *_library;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NRDevice *device;
@property (readonly, nonatomic) NSString *syncedAlbumName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startObserving;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_stopObserving;
- (void)collectionTargetLibraryDidUpdate:(id)a0;

@end
