@class NSString;

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline

@property (nonatomic) BOOL imageQueueUpdatedNotificationSent;
@property (nonatomic) BOOL previewRunning;
@property (nonatomic) BOOL previewSinkEnabled;
@property (retain, nonatomic) NSString *sourceID;

- (void)dealloc;

@end
