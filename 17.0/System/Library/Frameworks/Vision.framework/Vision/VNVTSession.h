@interface VNVTSession : NSObject {
    unsigned int _inputPixelFormat;
    unsigned int _outputPixelFormat;
    void *_session;
}

- (id)initWithSession:(void *)a0;
- (void)dealloc;

@end
