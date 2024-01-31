@class CAMPerformanceTestPlan;

@interface CAMApplication : UIApplication

@property (class, readonly, nonatomic) long long appOrPlugInInterfaceOrientation;
@property (class, readonly, nonatomic) BOOL isAppOrPlugInSuspended;
@property (class, readonly, nonatomic) long long appOrPlugInState;

@property (retain, nonatomic) CAMPerformanceTestPlan *currentTestPlan;

- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (void)_registerPreviewStartBlock:(id /* block */)a0;
- (BOOL)runNewPPTUICaptureTestWithTestPlan:(id)a0 options:(id)a1;
- (void)_configureExtendedLaunchTestIfNeeded;
- (void)didOpenViewfinderForReason:(long long)a0;
- (BOOL)runPresentCameraRollWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runSwitchToPortraitFrontWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runLibrarySelectionWithTestPlan:(id)a0 options:(id)a1;
- (void)willCloseViewfinderForReason:(long long)a0;
- (BOOL)runTakePicturePortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runTakePictureTestWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (void).cxx_destruct;
- (BOOL)runTakePictureFrontPortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (id)_extendLaunchTest;
- (void)didChangeToMode:(long long)a0 device:(long long)a1;
- (BOOL)runSwitchModesWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (void)willOpenViewfinderForReason:(long long)a0;
- (BOOL)runTakeVideoTestWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (BOOL)runSwitchCamerasTestWithTestPlan:(id)a0 options:(id)a1;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)a0;
- (void)didCloseViewfinderForReason:(long long)a0;
- (BOOL)runTakePictureFrontCameraWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;

@end
