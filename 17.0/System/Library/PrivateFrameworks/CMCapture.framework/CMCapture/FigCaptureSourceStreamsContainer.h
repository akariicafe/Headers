@class NSArray, BWFigCaptureDevice, NSDictionary, BWFigCaptureStream;

@interface FigCaptureSourceStreamsContainer : NSObject {
    int _deviceType;
    int _stillImageDepthDataType;
    BWFigCaptureDevice *_device;
    NSArray *_streams;
    BWFigCaptureStream *_primaryStream;
    NSDictionary *_streamsByPortType;
    NSDictionary *_baseZoomFactorsByPortType;
    float _minZoomFactorForDepth;
}

- (void)dealloc;

@end
