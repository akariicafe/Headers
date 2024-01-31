@class FigScreenCaptureConfiguration, FigDisplayConfiguration;
@protocol FigScreenCaptureFrameHandlerDelegate;

@interface FigScreenCaptureController : NSObject {
    int _mode;
}

@property (nonatomic) struct OpaqueFigVirtualDisplaySession { } *session;
@property (nonatomic) struct OpaqueFigSimpleMutex { } *lock;
@property (nonatomic) struct __CFDictionary { } *options;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minIntervalBetweenFrames;
@property (readonly, nonatomic) FigScreenCaptureConfiguration *screenCaptureConfiguration;
@property (readonly, nonatomic) FigDisplayConfiguration *displayConfiguration;
@property (weak, nonatomic) id<FigScreenCaptureFrameHandlerDelegate> delegate;

+ (id)screenCaptureControllerWithCaptureConfiguration:(id)a0;
+ (id)screenCaptureControllerWithDisplayConfiguration:(id)a0;
+ (id)screenCaptureControllerWithFigVirtualDisplayOptions:(id)a0;
+ (id)screenCaptureControllerWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (void)dealloc;
- (void)stopCapture;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)startCapture;
- (struct __CFDictionary { } *)getFVDOptions;
- (id)initWithFigVirtualDisplayOptions:(id)a0;
- (id)initWithScreenCaptureConfiguration:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)resumeCapture;
- (void)setFigVirtualDisplayOption:(id)a0 forKey:(id)a1;
- (void)suspendCapture;

@end
