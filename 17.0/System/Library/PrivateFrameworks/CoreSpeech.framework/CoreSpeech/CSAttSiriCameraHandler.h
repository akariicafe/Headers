@class NSString;
@protocol CSAttSiriServiceProtocol;

@interface CSAttSiriCameraHandler : NSObject <CSAttSiriFaceTrackingCaptureDelegate>

@property (weak, nonatomic) id<CSAttSiriServiceProtocol> delegate;
@property (nonatomic) BOOL useLegacyGazeModel;
@property (nonatomic) BOOL isCameraStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)gazeEstimates:(struct CGPoint { double x0; double x1; })a0 landmarks:(id)a1;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)startCamera:(BOOL)a0;
- (void)stopCamera;

@end
