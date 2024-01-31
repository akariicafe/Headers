@class AVCRateControlFeedbackController, AVCStatisticsCollector, AVCBasebandCongestionDetector, VCRateControlMediaController;

@interface VCMediaStreamRateControlConfig : NSObject

@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController;
@property (nonatomic) BOOL shouldCreateMediaControlInfoGenerator;
@property (nonatomic) BOOL shouldRegisterMediaControlInfoGeneratorCallbacks;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) unsigned int mediaControlInfoGeneratorType;
@property (nonatomic) void *mediaControlInfoGenerator;
@property (nonatomic) unsigned int mediaControlInfoGeneratorOptions;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x0; } *mediaQueue;
@property (nonatomic) double mediaQueueThrottlingInterval;
@property (nonatomic) struct tagVCMediaQueue { } *vcMediaQueue;

- (id)init;
- (void)dealloc;

@end
