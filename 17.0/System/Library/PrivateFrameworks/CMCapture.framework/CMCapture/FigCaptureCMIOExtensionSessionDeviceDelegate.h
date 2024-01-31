@class NSString;

@interface FigCaptureCMIOExtensionSessionDeviceDelegate : NSObject <CMIOExtensionSessionDeviceDelegate> {
    struct OpaqueFigCaptureDevice { } *_figCaptureDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)device:(id)a0 deviceControlPIDChanged:(int)a1;
- (void)device:(id)a0 availableStreamsChanged:(id)a1;
- (void)device:(id)a0 runningSomewhereChanged:(BOOL)a1;
- (void)device:(id)a0 propertiesChanged:(id)a1;
- (void)deviceHasBeenInvalidated:(id)a0;

@end
