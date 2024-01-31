@class NSString, DKTrackingAgent, BWDeviceOrientationMonitor, NSDate;

@interface BWDockKitNode : BWNode <NSXPCListenerDelegate> {
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    DKTrackingAgent *_agent;
    NSDate *start;
    double minFrameDuration;
    BOOL _isRunningForContinuityCapture;
}

@property (copy, nonatomic) NSString *clientApplicationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithIsRunningForContinuityCapture:(BOOL)a0;

@end
