@class AVWeakReferencingDelegateStorage, NSMutableArray;
@protocol AVCapturePhotoOutputReadinessCoordinatorDelegate;

@interface AVCapturePhotoOutputReadinessCoordinator : NSObject {
    AVWeakReferencingDelegateStorage *_delegateStorage;
    long long _captureReadiness;
    struct AVCapturePhotoOutputCaptureReadinessState { BOOL sessionIsRunning; BOOL autoDeferredPhotoDeliveryEnabled; BOOL responsiveCaptureEnabled; int numberOfPhotoCapturesInflight; long long latestCaptureUniqueID; long long inflightNonOverlappingCaptureUniqueID; long long inflightUniqueIDWaitingForCapture; long long inflightUniqueIDWaitingForProcessing; } _captureReadinessState;
    NSMutableArray *_trackedPhotoSettingsArray;
}

@property (weak) id<AVCapturePhotoOutputReadinessCoordinatorDelegate> delegate;
@property (readonly, nonatomic) long long captureReadiness;

+ (long long)_captureReadinessFromReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { BOOL x0; BOOL x1; BOOL x2; int x3; long long x4; long long x5; long long x6; long long x7; })a0;
+ (BOOL)_isOverlappingCaptureSupportedForPhotoSettings:(id)a0 autoDeferredPhotoDeliveryEnabled:(BOOL)a1 responsiveCaptureEnabled:(BOOL)a2;

- (id)_queue;
- (void)dealloc;
- (void)_invokeDelegateCallbackWithBlock:(id /* block */)a0;
- (void)_photoOutputDidUpdateCaptureReadinessState:(struct AVCapturePhotoOutputCaptureReadinessState { BOOL x0; BOOL x1; BOOL x2; int x3; long long x4; long long x5; long long x6; long long x7; })a0;
- (void)_setDelegate:(id)a0 queue:(id)a1;
- (void)_updateCaptureReadinessWithDelegate:(id)a0;
- (id)initWithPhotoOutput:(id)a0;
- (void)startTrackingCaptureRequestUsingPhotoSettings:(id)a0;
- (void)stopTrackingCaptureRequestUsingPhotoSettingsUniqueID:(long long)a0;

@end
