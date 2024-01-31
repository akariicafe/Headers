@class NSString, NSArray, NSURL, AVMomentCaptureMovieRecordingResolvedSettings;

@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper

@property (readonly) NSString *videoCodecType;
@property (readonly) NSURL *spatialOverCaptureMovieFileURL;
@property (readonly) NSArray *spatialOverCaptureMovieMetadata;
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (nonatomic) BOOL didFinishWritingMovieCallbackFired;
@property (nonatomic) BOOL didFinishWritingSpatialOverCaptureMovieCallbackFired;

+ (id)wrapperWithSettings:(id)a0 delegate:(id)a1 connections:(id)a2;

- (void)dealloc;
- (id)initWithSettings:(id)a0 delegate:(id)a1 connections:(id)a2;

@end
