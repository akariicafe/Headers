@interface SOSButtonPressState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL volumeUpPressed;
@property (readonly, nonatomic) BOOL volumeDownPressed;
@property (readonly, nonatomic) double volumeUpPressedMCTTimestamp;
@property (readonly, nonatomic) double volumeDownPressedMCTTimestamp;
@property (readonly, nonatomic) double lockPressedMCTTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)getButtonPressGap;
- (id)initWithVolumeUpPressed:(BOOL)a0 Timestamp:(double)a1 VolumeDownPressed:(BOOL)a2 Timestamp:(double)a3 LockPressedTimestamp:(double)a4;

@end
