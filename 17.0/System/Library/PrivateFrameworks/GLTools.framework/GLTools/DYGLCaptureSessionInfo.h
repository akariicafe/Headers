@class NSArray;

@interface DYGLCaptureSessionInfo : DYCaptureSessionInfo

@property (readonly, retain, nonatomic) NSArray *contextsInfo;
@property (readonly, retain, nonatomic) NSArray *requiredExtensions;
@property (readonly, nonatomic) BOOL wasCheckingGLErrors;

+ (id)captureSessionInfoWithCaptureStore:(id)a0;

- (void)dealloc;
- (void)deleteContexts:(const void *)a0;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)a0 limitBackwardsCompatibility:(BOOL)a1 isInternal:(BOOL)a2;
- (id)contextInfoForContext:(unsigned long long)a0;
- (id)initWithCaptureStore:(id)a0;

@end
