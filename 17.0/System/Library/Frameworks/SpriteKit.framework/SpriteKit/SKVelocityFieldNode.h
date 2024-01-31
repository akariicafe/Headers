@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode

@property (retain, nonatomic) SKTexture *velocityTexture;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)_descriptionClassName;

@end
