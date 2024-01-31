@interface WebCoreAudioCaptureSourceIOSListener : NSObject {
    void *_callback;
}

- (void)invalidate;
- (id)initWithCallback:(void *)a0;
- (void)sessionMediaServicesWereReset:(id)a0;

@end
