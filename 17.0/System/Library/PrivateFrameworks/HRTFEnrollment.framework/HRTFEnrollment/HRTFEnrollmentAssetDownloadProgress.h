@interface HRTFEnrollmentAssetDownloadProgress : NSObject

@property (readonly) long long totalBytes;
@property (readonly) long long downloadedBytes;
@property (readonly) BOOL isStalled;
@property (readonly) double estimatedRemainingTime;

- (id)initWithTotalBytes:(long long)a0 downloadedBytes:(long long)a1 isStalled:(BOOL)a2 estimatedRemainingTime:(double)a3;

@end
