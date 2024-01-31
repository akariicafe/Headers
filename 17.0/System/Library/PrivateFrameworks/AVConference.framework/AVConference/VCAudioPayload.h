@class VCAudioPayloadConfig;

@interface VCAudioPayload : NSObject {
    struct SoundDec_t { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; int x2; int x3; struct OpaqueAudioConverter *x4; struct tagVCIndexedBuffer { char *x0; unsigned long long x1; unsigned long long x2; } x5; BOOL x6; struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } x7; struct AudioBufferList *x8; struct AudioBufferList *x9; char *x10; int x11; int x12; int x13; int x14; unsigned char x15; int x16; int x17; unsigned int x18; unsigned int x19; struct CMRData { unsigned int x0; unsigned int x1; struct EVSRFParams { unsigned int x0; unsigned int x1; } x2; } x20; BOOL x21; unsigned char x22; BOOL x23; unsigned char x24; int x25; BOOL x26; struct EVSRFParams { unsigned int x0; unsigned int x1; } x27; struct EVSRFParams { unsigned int x0; unsigned int x1; } x28; } *_encoder;
    BOOL _shouldReset;
    BOOL _ramStadSRCEnabled;
}

@property (readonly, nonatomic) VCAudioPayloadConfig *config;
@property (readonly, nonatomic) unsigned int bitrate;
@property (readonly, nonatomic) int bandwidth;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)description;
- (BOOL)setBitrate:(unsigned int)a0;
- (BOOL)setBandwidth:(int)a0;
- (BOOL)setEVSRFParams:(struct EVSRFParams { unsigned int x0; unsigned int x1; } *)a0;
- (BOOL)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (int)encodeAudio:(struct opaqueVCAudioBufferList { } *)a0 numInputSamples:(int)a1 outputBytes:(void *)a2 numOutputBytes:(int)a3;
- (BOOL)getMagicCookie:(char *)a0 withLength:(unsigned int *)a1;
- (BOOL)isDTXEmptyPacket:(unsigned int)a0;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)a0 numBytes:(int)a1;
- (BOOL)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent { int x0; int x1; int x2; unsigned int x3; struct EVSRFParams { unsigned int x0; unsigned int x1; } x4; })a0;
- (void)setCurrentDTXEnable:(BOOL)a0;
- (void)setRamStadSRCEnabled:(BOOL)a0;

@end
