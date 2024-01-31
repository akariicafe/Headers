@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BLSDiagnostics : NSObject <BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)allFlipbookFrames;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void)invalidate;
- (id)frameOnGlassNow;
- (id)frameWithUUID:(id)a0;
- (void).cxx_destruct;
- (struct __IOSurface { } *)rawSurfaceForFrame:(id)a0;
- (struct __IOSurface { } *)surfaceForFrame:(id)a0;

@end
