@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)_descriptionClassName;

@end
