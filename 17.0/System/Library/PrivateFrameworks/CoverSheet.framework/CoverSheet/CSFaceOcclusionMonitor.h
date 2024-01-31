@class NSString;
@protocol CSFaceOcclusionMonitorDelegate;

@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling>

@property (weak, nonatomic) id<CSFaceOcclusionMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long faceOcclusionsSinceScreenOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_handleBiometricEvent:(unsigned long long)a0;
- (void)conformsToCSEventHandling;
- (void).cxx_destruct;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;

@end
