@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotClient : NSObject <NTKFaceSnapshotClient> {
    NSXPCConnection *_daemonConnection;
    BOOL _registrationNeeded;
    NSObject<OS_dispatch_queue> *_snapshotFileQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handleConnectionInterrupted;
- (void)_registerIfNeeded;
- (void)_register;
- (void).cxx_destruct;
- (void)synchronouslyUpdateAllSnapshots;
- (void)_askDaemonForSnapshotOfDescriptor:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_askXPCServiceForSnapshotOfDescriptor:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_handleActiveDeviceChangedNotification;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_setupDaemonConnection;
- (void)_updateAllSnapshots;
- (void)faceSnapshotChangedForKey:(id)a0;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(id /* block */)a0;
- (void)requestSnapshotOfFace:(id)a0;
- (void)snapshotFace:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
