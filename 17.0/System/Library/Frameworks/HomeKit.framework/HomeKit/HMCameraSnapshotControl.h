@class NSString, _HMCameraSnapshotControl, HMCameraSnapshot;
@protocol HMCameraSnapshotControlDelegate;

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) _HMCameraSnapshotControl *snapshotControl;
@property (weak, nonatomic) id<HMCameraSnapshotControlDelegate> delegate;
@property (readonly, nonatomic) HMCameraSnapshot *mostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)takeSnapshot;
- (void)cameraSnapshotControl:(id)a0 didTakeSnapshot:(id)a1 error:(id)a2;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)a0;
- (void)fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSnapshotControl:(id)a0;

@end
