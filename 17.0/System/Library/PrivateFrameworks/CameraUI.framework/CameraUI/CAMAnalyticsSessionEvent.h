@class NSString, NSMutableDictionary, NSSet, CAMCallStatusMonitor;

@interface CAMAnalyticsSessionEvent : CAMAnalyticsEvent

@property (retain, nonatomic) NSString *_hostProcess;
@property (nonatomic) double _startTime;
@property (retain, nonatomic) NSString *_firstCaptureMode;
@property (retain, nonatomic) NSString *_firstCaptureDevicePosition;
@property (nonatomic) double _cameraRollStartTime;
@property (nonatomic) double _cameraRollTotalTime;
@property (nonatomic, getter=_isInCameraRoll, setter=_setInCameraRoll:) BOOL _inCameraRoll;
@property (nonatomic) long long _cameraRollInteraction;
@property (nonatomic) double _previewStartTime;
@property (nonatomic) double _firstCaptureStartTime;
@property (readonly, nonatomic) NSMutableDictionary *_captureCountsByMode;
@property (readonly, nonatomic) NSMutableDictionary *_captureCountsByMediaType;
@property (nonatomic) unsigned long long _totalControlDrawerOpenings;
@property (nonatomic) unsigned long long _totalZoomInteractions;
@property (nonatomic) unsigned long long _totalFocusInteractions;
@property (nonatomic) unsigned long long _totalFocusLockInteractions;
@property (nonatomic) unsigned long long _totalCaptures;
@property (nonatomic) unsigned long long _totalTextInteractions;
@property (nonatomic) unsigned long long _totalMRCInteractions;
@property (readonly, nonatomic) BOOL _mrcDetectionEnabled;
@property (readonly, nonatomic) BOOL _textDetectionEnabled;
@property (copy, nonatomic) NSSet *_availableCaptureModes;
@property (nonatomic) BOOL _hadActiveCall;
@property (readonly, nonatomic) CAMCallStatusMonitor *_callStatusMonitor;
@property (readonly, nonatomic) BOOL didCapture;

+ (id)_bucketCaptureCount:(id)a0;
+ (void)_incrementDictionaryCount:(id)a0 forKey:(id)a1;

- (void)_handleCallStatusMonitorDidChangeCallActive:(id)a0;
- (void)publish;
- (id)eventName;
- (void)didFocusInteraction;
- (void)didDismissCameraRoll;
- (void)didPresentCameraRoll;
- (void)didCaptureWithRequest:(id)a0 currentConfiguration:(id)a1;
- (void)didStartPreview;
- (void)countEventsFromAnalyticsVisionSession:(id)a0;
- (void)didFocusLockInteraction;
- (id)_bucketCaptureCountForMode:(long long)a0;
- (void).cxx_destruct;
- (void)didCaptureTimelapseWithConfiguration:(id)a0;
- (void)_endSession;
- (void)didZoomInteraction:(long long)a0;
- (void)_incrementCaptureForGraphConfiguration:(id)a0 analyticsMediaType:(long long)a1;
- (void)updateForLocationController:(id)a0;
- (id)_bucketCaptureCountForMediaType:(long long)a0;
- (id)initWithCapabilities:(id)a0 availableCaptureModes:(id)a1 callStatusMonitor:(id)a2;

@end
