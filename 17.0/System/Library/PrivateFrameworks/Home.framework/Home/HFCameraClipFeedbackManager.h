@interface HFCameraClipFeedbackManager : NSObject

+ (void)donateAllCameraClipsForCameraProfile:(id)a0 completion:(id /* block */)a1;
+ (void)donateCameraClip:(id)a0 forCameraProfile:(id)a1 completion:(id /* block */)a2;
+ (void)donateNotificationCenterCameraClip:(id)a0 forCameraProfile:(id)a1 completion:(id /* block */)a2;
+ (void)donateCameraClip:(id)a0 forCameraProfile:(id)a1 processName:(id)a2 completion:(id /* block */)a3;

@end
