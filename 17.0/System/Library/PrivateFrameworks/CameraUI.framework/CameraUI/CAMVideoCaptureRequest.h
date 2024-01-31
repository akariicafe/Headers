@protocol CAMVideoCaptureRequestDelegate;

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isTimelapse) BOOL timelapse;
@property (readonly, nonatomic) BOOL shouldGenerateVideoPreviewImage;
@property (readonly, nonatomic) double maximumRecordedDuration;
@property (readonly, nonatomic) long long maximumRecordedFileSize;
@property (readonly, nonatomic) long long remainingDiskUsageThreshold;
@property (readonly, weak, nonatomic) id<CAMVideoCaptureRequestDelegate> delegate;
@property (readonly, nonatomic) long long captureVideoConfiguration;
@property (readonly, nonatomic) long long torchMode;
@property (readonly, nonatomic) BOOL wantsWhiteBalanceLocked;
@property (readonly, nonatomic) double userInitationTimestamp;

- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1 includeAnalytics:(BOOL)a2;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
