@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (void)setRunningInsideMapsApp;
+ (id)sharedState;
+ (BOOL)isMapsAppInstalled;

- (id)init;
- (void)dealloc;
- (BOOL)_isMapsAppInstalled;
- (void)receivedChangeNotification:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (BOOL)_fetchMapsAppInstallState;
- (void).cxx_destruct;
- (void)registerMapsInstallStateObserver:(id)a0;

@end
