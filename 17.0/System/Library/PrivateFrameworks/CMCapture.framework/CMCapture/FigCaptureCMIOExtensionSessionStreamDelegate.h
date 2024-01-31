@class NSString;

@interface FigCaptureCMIOExtensionSessionStreamDelegate : NSObject <CMIOExtensionSessionStreamDelegate> {
    struct OpaqueFigCaptureStream { } *_figCaptureStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 activeFormatIndexChanged:(unsigned long long)a1;
- (struct opaqueCMSampleBuffer { } *)stream:(id)a0 copySampleBuffer:(BOOL *)a1 error:(id *)a2;
- (void)stream:(id)a0 propertiesChanged:(id)a1;
- (void)stream:(id)a0 receivedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)stream:(id)a0 scheduledOutputChanged:(id)a1;
- (void)streamHasBeenInvalidated:(id)a0;

@end
