@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;

+ (void)initialize;

- (void)dealloc;
- (id)_initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimestamp;
- (int)constituentDeviceCaptureID;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;
- (void)setAdjustedTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setTimestampOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
