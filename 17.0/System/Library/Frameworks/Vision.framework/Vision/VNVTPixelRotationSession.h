@interface VNVTPixelRotationSession : VNVTSession {
    unsigned int _rotation;
    struct OpaqueVTPixelRotationSession { } *_pixelRotationSession;
}

- (void)dealloc;

@end
