@class NSString, NSSet, NSArray, PRSWallpaperPublisher, BSServiceConnection, PRSServerPosterPath;
@protocol BSServiceConnectionHost, PRSWallpaperObserving;

@interface PRSWallpaperClient : NSObject <PRSWallpaperObserverInitializing> {
    PRSWallpaperPublisher *_publisher;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    id<PRSWallpaperObserving> _proxy;
    NSString *_description;
    PRSServerPosterPath *_lastPaths[4];
    unsigned long long _changeVersions[4];
    unsigned long long _observed;
    BOOL _initialized;
    BOOL _needsSandboxExtensions;
    BOOL _observingSnapshotChanges;
    BOOL _observingPathChanges;
    NSSet *_activePosterObservedRoles;
    BOOL _roleActivePosterObservedRolesNeedsSandboxExtension;
    BOOL _observingRoleActivePostersChanges;
    NSArray *_lastKnownPosterCollection;
    NSString *_posterCollectionChangesRole;
    BOOL _observingRolePosterCollectionChangesNeedsSandboxExtension;
    BOOL _observingRolePosterCollectionChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)initializeWithKnownIdentities:(id)a0 knownRoles:(id)a1 knownCollection:(id)a2;

@end
