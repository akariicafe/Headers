@interface ANST3DPoseEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long yaw;
@property (readonly, nonatomic) long long roll;
@property (readonly, nonatomic) long long refinedYaw;
@property (readonly, nonatomic) long long refinedRoll;
@property (readonly, nonatomic) long long refinedPitch;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithYaw:(long long)a0 roll:(long long)a1 refinedYaw:(long long)a2 refinedRoll:(long long)a3 refinedPitch:(long long)a4;

@end
