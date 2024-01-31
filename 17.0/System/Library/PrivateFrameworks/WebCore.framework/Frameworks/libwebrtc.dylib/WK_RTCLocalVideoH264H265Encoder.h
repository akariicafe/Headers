@class WK_RTCVideoEncoderH264, WK_RTCVideoEncoderH265;

@interface WK_RTCLocalVideoH264H265Encoder : NSObject {
    WK_RTCVideoEncoderH264 *m_h264Encoder;
    WK_RTCVideoEncoderH265 *m_h265Encoder;
}

- (void)setCallback:(id /* block */)a0;
- (void)flush;
- (void)setLowLatency:(BOOL)a0;
- (void).cxx_destruct;
- (int)codecType;
- (long long)encode:(id)a0 codecSpecificInfo:(id)a1 frameTypes:(id)a2;
- (id)initWithCodecInfo:(id)a0;
- (long long)releaseEncoder;
- (int)setBitrate:(unsigned int)a0 framerate:(unsigned int)a1;
- (void)setDescriptionCallback:(id /* block */)a0;
- (void)setUseAnnexB:(BOOL)a0;
- (long long)startEncodeWithSettings:(id)a0 numberOfCores:(int)a1;

@end
