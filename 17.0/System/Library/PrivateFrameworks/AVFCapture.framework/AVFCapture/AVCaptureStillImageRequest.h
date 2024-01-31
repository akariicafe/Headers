@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject

@property (copy) id /* block */ sbufCompletionBlock;
@property (copy) id /* block */ iosurfaceCompletionBlock;
@property (copy) id /* block */ bracketedCaptureCompletionBlock;
@property long long settingsID;
@property unsigned int shutterSoundID;
@property (retain) AVCaptureBracketedStillImageSettings *bracketedSettings;

+ (id)request;

- (void)dealloc;

@end
