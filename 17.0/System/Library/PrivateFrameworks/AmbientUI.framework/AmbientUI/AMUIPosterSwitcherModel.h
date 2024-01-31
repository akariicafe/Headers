@class NSArray, PRSWallpaperObserver, AMUIPosterUpdater, NSHashTable, PRSPosterConfiguration;

@interface AMUIPosterSwitcherModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSHashTable *_observers;
    PRSWallpaperObserver *_wallpaperObserver;
}

@property (copy, nonatomic, setter=_setPosterConfigurations:) NSArray *posterConfigurations;
@property (retain, nonatomic, setter=_setActiveConfiguration:) PRSPosterConfiguration *activeConfiguration;
@property (readonly, nonatomic) AMUIPosterUpdater *posterConfigurationsUpdater;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
