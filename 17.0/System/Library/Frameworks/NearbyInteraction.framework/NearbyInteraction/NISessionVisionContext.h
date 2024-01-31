@class ARSession, ARFrame;

@interface NISessionVisionContext : NSObject

@property (retain, nonatomic) ARSession *arSession;
@property (nonatomic) unsigned long long arSessionState;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic, getter=isARSessionInternal) BOOL arSessionInternal;
@property (nonatomic, getter=isARSessionInClientProcess) BOOL arSessionInClientProcess;
@property (copy, nonatomic) ARFrame *latestARFrame;

- (id)init;
- (void).cxx_destruct;

@end
