@class NSString, NTKComplicationCollection;

@interface NTKCompanionBundleComplicationSyncCoordinator : NSObject <NTKComplicationCollectionObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NTKComplicationCollection *_complicationCollection;
}

@property (readonly) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)complicationCollectionDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)activeDeviceChanged;
- (id)descriptorsForBundleIdentifier:(id)a0;
- (void)_lock_updateLoaded;
- (void)complicationCollection:(id)a0 didUpdateComplicationDescriptorsForClient:(id)a1;
- (void)complicationCollectionDidReload:(id)a0;

@end
