@interface ASDStreamFormat : NSObject <NSCopying>

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) unsigned int formatFlags;
@property (nonatomic) unsigned int bytesPerPacket;
@property (nonatomic) unsigned int framesPerPacket;
@property (nonatomic) unsigned int bytesPerFrame;
@property (nonatomic) unsigned int channelsPerFrame;
@property (nonatomic) unsigned int bitsPerChannel;
@property (nonatomic) double minimumSampleRate;
@property (nonatomic) double maximumSampleRate;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;
- (unsigned int)framesToBytes:(unsigned int)a0;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (id)initWithSampleRate:(double)a0 numChannels:(unsigned int)a1 commonPCMFormat:(unsigned int)a2 isInterleaved:(BOOL)a3;
- (struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioValueRange { double x0; double x1; } x1; })audioStreamRangedDescription;
- (id)initWithAudioStreamRangedDescription:(struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioValueRange { double x0; double x1; } x1; } *)a0;

@end
