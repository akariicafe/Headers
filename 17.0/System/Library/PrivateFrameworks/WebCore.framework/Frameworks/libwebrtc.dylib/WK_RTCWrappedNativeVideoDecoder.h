@class NSString;

@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder> {
    struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *__value_; } __ptr_; } _wrappedDecoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)releaseDecoder;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (id)implementationName;
- (id)initWithNativeDecoder:(struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *x0; } x0; })a0;
- (struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct __compressed_pair<webrtc::VideoDecoder *, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *x0; } x0; })releaseWrappedDecoder;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
