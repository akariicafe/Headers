@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long callId;
@property (nonatomic) long long codec;
@property (nonatomic) unsigned long long amrMode;
@property (nonatomic) long long evsBandwidth;
@property (nonatomic) long long evsBitrate;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long i2SClockRate;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallId:(unsigned long long)a0 codec:(long long)a1 amrMode:(unsigned long long)a2 evsBandwidth:(long long)a3 evsBitrate:(long long)a4;
- (id)initWithCallId:(unsigned long long)a0 codec:(long long)a1 amrMode:(unsigned long long)a2 evsBandwidth:(long long)a3 evsBitrate:(long long)a4 sampleRate:(unsigned long long)a5 i2SClockRate:(unsigned long long)a6;

@end
