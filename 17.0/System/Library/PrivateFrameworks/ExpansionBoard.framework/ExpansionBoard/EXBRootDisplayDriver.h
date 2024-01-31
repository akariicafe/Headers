@class FBSDisplayIdentity, NSString, EXBDisplayAssertionCoordinator, FBSDisplayConfiguration, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_queue, EXBDisplayTransformUpdating;

@interface EXBRootDisplayDriver : NSObject <BSDescriptionStreamable> {
    Class _ConfigBuilderClass;
    NSObject<OS_dispatch_queue> *_CADisplayQueue;
    FBSDisplayIdentity *_rootIdentity;
    EXBDisplayAssertionCoordinator *_assertionCoordinator;
    id<EXBDisplayTransformUpdating> _transformUpdater;
    BOOL _didConnectRootIdentity;
    FBSDisplayConfiguration *_rootConfiguration;
    NSMutableSet *_trackedDisplays;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_recordsByProfile;
    NSMapTable *_lock_seedsByProfile;
    NSMapTable *_lock_index_recordsByDisplay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addProfile:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)transformDisplayConfiguration:(id)a0;
- (void)displayUpdated:(id)a0;
- (void)_derivedDisplayConnected:(id)a0;
- (void)_performWithRecordForDisplay:(id)a0 block:(id /* block */)a1;
- (void)_rootDisplayConnected:(id)a0;
- (id)controllerForDisplay:(id)a0;
- (void)displayConnected:(id)a0;
- (void)displayDisconnected:(id)a0;
- (id)initWithRootIdentity:(id)a0 transformUpdater:(id)a1 assertionCoordinator:(id)a2 builderClass:(Class)a3;
- (BOOL)isTrackingDisplays;
- (BOOL)isTrackingProfile:(id)a0;
- (BOOL)isTrackingProfileForDisplay:(id)a0;
- (id)profileForDisplay:(id)a0;
- (void)removeProfile:(id)a0;

@end
