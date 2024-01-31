@interface BWZoomDelayBuffer : NSObject {
    struct { float x0; int x1; BOOL x2; } *_zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}

- (void)dealloc;

@end
