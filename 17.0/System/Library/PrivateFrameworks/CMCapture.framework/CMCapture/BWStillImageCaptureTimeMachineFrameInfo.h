@interface BWStillImageCaptureTimeMachineFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int timeMachineIndex;
@property (nonatomic) BOOL isNoLongErrorRecoveryFrame;

+ (id)infoWithTimeMachineIndex:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeMachineIndex:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

@end
