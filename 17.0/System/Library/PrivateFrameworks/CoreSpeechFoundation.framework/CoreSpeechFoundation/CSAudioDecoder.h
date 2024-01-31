@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject {
    struct OpaqueAudioConverter { } *_decoder;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _inASBD;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outASBD;
}

@property (weak) id<CSAudioDecoderDelegate> delegate;

- (void).cxx_destruct;
- (void)addPackets:(id)a0 audioStreamHandleId:(unsigned long long)a1 remoteVAD:(id)a2 timestamp:(unsigned long long)a3 arrivalTimestampToAudioRecorder:(unsigned long long)a4 wasBuffered:(BOOL)a5 receivedNumChannels:(unsigned int)a6;
- (id)initWithInASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;

@end
