@class CIDVRGBContext, UINavigationController, NSArray, NSString, NSNumber;
@protocol PADFrameQualityMonitor, CIDVRGBCaptureDelegate;

@interface CIDVRGBCaptureUIConfig : NSObject

@property (weak, nonatomic) CIDVRGBContext *context;
@property (retain, nonatomic) UINavigationController *parentVC;
@property (nonatomic) unsigned long long maxRetakeCount;
@property (retain, nonatomic) NSArray *gestureSequence;
@property (retain, nonatomic) NSArray *gestureTypes;
@property (retain, nonatomic) NSNumber *minRequiredGesturesCount;
@property (retain, nonatomic) NSNumber *gestureSkipSoftTimeout;
@property (retain, nonatomic) NSNumber *gestureSkipSoftAccessible;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *gestureSkipHardTimeout;
@property (retain, nonatomic) NSNumber *gestureSkipHardAccessible;
@property (retain, nonatomic) NSNumber *faceOutOfBoundFrames;
@property (retain, nonatomic) NSNumber *gestureCompletionDelay;
@property (retain, nonatomic) NSNumber *tutorialVideoDelay;
@property (retain, nonatomic) NSNumber *tutorialVideoDuration;
@property (retain, nonatomic) NSNumber *tutorialResumeDelay;
@property (retain, nonatomic) NSNumber *gestureDetectedSuccessDuration;
@property (retain, nonatomic) NSNumber *lastGestureExtraFrameDuration;
@property (retain, nonatomic) NSNumber *imageWidth;
@property (retain, nonatomic) NSNumber *imageHeight;
@property (retain, nonatomic) NSNumber *imageCompressionQuality;
@property (retain, nonatomic) id<PADFrameQualityMonitor> qualityMonitor;
@property (nonatomic) BOOL requiresGoodLux;
@property (nonatomic) long long targetDevice;
@property (weak, nonatomic) id<CIDVRGBCaptureDelegate> delegate;
@property (retain, nonatomic) NSString *issuerName;
@property (nonatomic) BOOL enablePrintReplay;
@property (nonatomic) BOOL enableIDMatching;

- (void).cxx_destruct;
- (id)initWithCaptureConfig:(id)a0 imageQualityDelegate:(id)a1 andCaptureDelegate:(id)a2;

@end
