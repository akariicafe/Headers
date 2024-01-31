@class ARSession, NSString, ARPositionalTrackingConfiguration;
@protocol MDARControllerDelegate;

@interface MDARController : NSObject <ARSessionDelegate> {
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
    ARPositionalTrackingConfiguration *_sessionConfiguration;
}

@property (class, readonly) BOOL isSupported;

@property (weak, nonatomic) id<MDARControllerDelegate> delegate;
@property (readonly, nonatomic) ARSession *session;
@property (readonly, nonatomic) unsigned long long sessionInterruptedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)vkARTrackingStateFromARTrackingState:(long long)a0;
+ (unsigned long long)vkARTrackingStateReasonFromARTrackingStateReason:(long long)a0;

- (void)pause;
- (id)init;
- (void)run:(BOOL)a0;
- (void)dealloc;
- (void)sessionInterruptionEnded:(id)a0;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)sessionWasInterrupted:(id)a0;
- (void)_avCaptureSessionWasInterrupted:(id)a0;
- (void)session:(id)a0 cameraDidChangeTrackingState:(id)a1;

@end
