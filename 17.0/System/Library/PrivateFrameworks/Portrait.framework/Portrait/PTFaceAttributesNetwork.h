@class VNSession, VNSequenceRequestHandler;
@protocol MLComputeDeviceProtocol;

@interface PTFaceAttributesNetwork : NSObject {
    VNSequenceRequestHandler *_handler;
    VNSession *_session;
    id<MLComputeDeviceProtocol> _aneDevice;
}

- (id)init;
- (id)createRequest;
- (void).cxx_destruct;
- (id)faceLandmarksInPixelBuffer:(struct __CVBuffer { } *)a0 faceRects:(id)a1 orientation:(unsigned int)a2;

@end
