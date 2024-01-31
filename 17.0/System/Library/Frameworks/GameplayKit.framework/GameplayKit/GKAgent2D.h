@interface GKAgent2D : GKAgent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) float rotation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (void)applyBrakingForce:(float)a0 deltaTime:(double)a1;
- (void)applySteeringForce:(SEL)a0 deltaTime:(double)a1;
- (struct float2 { float x0; float x1; })position_;
- (void)setPosition_:(struct float2 { float x0; float x1; })a0;
- (struct float2 { float x0; float x1; })velocity_;

@end
