@class NSString;

@interface WK_RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder> {
    struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> { struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> { struct VideoEncoder *__value_; } __ptr_; } _wrappedEncoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)scalingSettings;
- (long long)encode:(id)a0 codecSpecificInfo:(id)a1 frameTypes:(id)a2;
- (id)implementationName;
- (id)initWithNativeEncoder:(struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> { struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> { struct VideoEncoder *x0; } x0; })a0;
- (long long)releaseEncoder;
- (struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> { struct __compressed_pair<webrtc::VideoEncoder *, std::default_delete<webrtc::VideoEncoder>> { struct VideoEncoder *x0; } x0; })releaseWrappedEncoder;
- (int)setBitrate:(unsigned int)a0 framerate:(unsigned int)a1;
- (long long)startEncodeWithSettings:(id)a0 numberOfCores:(int)a1;

@end
